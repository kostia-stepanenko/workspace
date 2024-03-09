#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "examples/array_example.c"
#include "examples/string_example.c"
#include "examples/file_example.c"
#include "examples/process_example.c"
#include "examples/producer_consumer_pipes_example.c"

int main(){

  //allocateArrayAndPrint();

  //allocateStringAndPrint();

  //openFileAndPrint();

  //startTwoProcesses();

  //startTwoProcessesAndPrintValues();

  startProducerConsumerWithPipes();

  return 0;
}

