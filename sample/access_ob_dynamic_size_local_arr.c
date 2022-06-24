#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 8

int main(int argc, const char *argv[]) {
  char *buf = malloc(BUFFERSIZE);
  strcpy(buf, "hoge");
  printf("%s\n", buf[BUFFERSIZE + 1]);
  free(buf);
  return 0;
}
