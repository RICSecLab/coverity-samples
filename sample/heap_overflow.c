#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 8

int main(int argc, const char *argv[]) {
  char *buf = (char *)malloc(sizeof(char) * BUFFERSIZE);
  if(!buf) {
    perror("malloc");
    exit(1);
  }
  strcpy(buf, argv[1]);
  printf("%s\n", buf);
  free(buf);
  return 0;
}
