#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 8

int main(int argc, char *argv[]) {
  int *buf = calloc(BUFFERSIZE, sizeof(int));
  if(!buf) {
    printf("calloc error\n");
    exit(1);
  }
  printf("%d\n", buf[BUFFERSIZE + 1]);
  free(buf);
  return 0;
}
