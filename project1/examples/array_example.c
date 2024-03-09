
#include <stdio.h>
#include <stdlib.h>

void fillInArray(int* arr, int length);

void printArray(int* arr, int length);

void allocateArrayAndPrint();

void allocateArrayAndPrint(){
  int* arrPtr = NULL;

  int arrSize = 10;

  arrPtr = (int*)malloc(arrSize* sizeof(int));

  if (arrPtr == NULL){
    fprintf(stderr, "Can't allocate memoryu for array\n");
  }

  fillInArray(arrPtr, arrSize);

  printArray(arrPtr, arrSize);

  free(arrPtr);
}

void fillInArray(int* arr, int length){
  for(int i = 0; i < length; ++i){
    arr[i] = i;
  }
}

void printArray(int* arr, int length){
    for(int i = 0; i < length; ++i){
    printf("%d, address: %p, value: %d\n", i, &arr[i], arr[i]);
  }
}