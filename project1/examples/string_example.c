#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocateStringAndPrint(){

    char *myStr = NULL;

    myStr = malloc(100 * sizeof(char));

    if (myStr == 0) {
        fprintf(stderr, "Can't allocate memory\n");
    }
    else {
        strcpy(myStr, "Hello, world!!!");
    }

    printf("Str: %s\n", myStr);


    free(myStr);
}