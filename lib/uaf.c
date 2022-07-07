#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFERSIZE 32

struct BUF {
  int num;
  int size;
};

void uaf() {
  struct BUF *buf;
  // struct: buf
  buf = (struct BUF *)malloc(sizeof(struct BUF));
  if (!buf) {
    perror("malloc");
    exit(1);
  }
  buf->size = BUFFERSIZE;
  buf->num = 0;
  printf("num: %d, size: %d\n", buf->num, buf->size);
  free(buf);

  // use after free
  buf->num = 1;
  buf->size = BUFFERSIZE + 2;
  printf("num: %d, size: %d\n", buf->num, buf->size);

  
}
