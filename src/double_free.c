#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 64

int main(int argc, const char *argv[]) {
  char *buff;

  buff = (char *)malloc(BUFFERSIZE);
  if (!buff) {
    perror("malloc");
    exit(1);
  }
  strncpy(buff, argv[1], BUFFERSIZE-1);
  free(buff);
  free(buff);
}