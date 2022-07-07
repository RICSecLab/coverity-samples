#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 8

void heap_overflow(char* input) {
  char *buf = (char *)malloc(sizeof(char) * BUFFERSIZE);
  if(!buf) {
    perror("malloc");
    exit(1);
  }
  strcpy(buf, input);
  printf("%s\n", buf);
  free(buf);
  
}
