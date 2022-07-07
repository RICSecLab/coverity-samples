#include<cstdio>
#include<cstdlib>
#include<iostream>

#define BUFFERSIZE 64

struct buf_t {
    int *buf;
    buf_t *next;
};

void memory_leak_struct_member() {
  struct buf_t buf;
  buf.buf = new int[BUFFERSIZE];
  buf.next = NULL;

  printf("%p\n", buf.buf); // disable Dead Store
  // delete[] buf.buf; // if not, memory leak
}
