#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void startProducerConsumerWithPipes(){

    FILE* stream;

    // 0 - READ
    // 1 - WRITE 
    int pipesFd[2]; 

    pipe(pipesFd);
    pid_t childPid = fork(); 

    if(childPid == 0 ){
        // child is READING
        close(pipesFd[1]);

        stream = fdopen(pipesFd[0], "r");

        char buf[128];

        while( !feof(stream) && !ferror(stream) && fgets(buf, sizeof(buf), stream) != NULL ){
            fputs(buf, stdout);
        }

        close(pipesFd[0]);
    }  
    else {
        // parent is writing
        close(pipesFd[0]);

        stream = fdopen(pipesFd[1], "w");

        for(int i = 0; i < 10; ++i){
            fprintf(stream, "message-%d\n",i);
            fflush(stream);
        }


        close(pipesFd[1]);
    } 

}