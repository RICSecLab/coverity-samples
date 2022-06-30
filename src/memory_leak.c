#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFERSIZE 32

struct BUF {
  int num;
  int size;
};

int main(int argc, char *argv[]) {
  struct BUF *buf;
  buf = (struct BUF *)malloc(sizeof(struct BUF));
  if (!buf) {
    perror("malloc");
    exit(1);
  }
  buf->num = 0;
  buf->size = BUFFERSIZE;
  printf("num: %d, size: %d\n", buf->num, buf->size);

  return 0;
}
