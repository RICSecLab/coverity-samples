#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFERSIZE 32

struct BUF {
  int age;
  int size;
};

int main(int argc, char *argv[]) {
  struct BUF *buf;
  buf = (struct BUF *)malloc(sizeof(struct BUF));
  // null gurd off
  // if (!buf) {
  //   perror("malloc");
  //   exit(1);
  // }
  buf->size = BUFFERSIZE;
  buf->age = 0;
  printf("name: %c, size: %d\n", buf->age, buf->size);
  free(buf);
  return 0;
}

