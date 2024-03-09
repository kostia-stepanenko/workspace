#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void openFileAndPrint(){
    FILE* fd = fopen("/tmp/my-temp-file", "w+");

    fprintf(fd, "first line for file\n");
    fprintf(fd, "Hello from %s", "Kostia\n");

    for(int i =0; i < 5; ++i){
        fprintf(fd, "Hello: %d\n", i);
    }

    fclose(fd);

}