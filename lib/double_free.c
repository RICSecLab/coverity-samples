#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 64

void double_free(char *input) {
  char *buff;

  buff = (char *)malloc(BUFFERSIZE);
  if (!buff) {
    perror("malloc");
    exit(1);
  }
  strncpy(buff, input, BUFFERSIZE-1);
  free(buff);
  free(buff);
}