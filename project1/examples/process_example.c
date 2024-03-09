#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void startTwoProcesses(){

    printf("Current process pid: %d and parend pid: %d\n", getpid(), getppid());

    pid_t childPid = fork();

    if(childPid == 0 ){
        printf("I'm in child process\n");
    } 
    else {
        printf("I'm in parent process, forked child pid: %d\n", childPid);
    }
}

void printCharsWithDelay(const char* data){
    while( *data ){
        putchar(*data);
        fflush(stdout);
        ++data;
        usleep(50);
    }
}


void startTwoProcessesAndPrintValues(){

    pid_t childPid = fork();

    if(childPid == 0 ){
        printCharsWithDelay("..........");
    } 
    else {
        //wait(NULL);
        printCharsWithDelay("||||||||||");
    }
}