#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 8

int main(int argc, const char *argv[]) {
  char buf[BUFFERSIZE] = {"hoge"};
  printf("%s\n", buf[BUFFERSIZE + 1]);
  return 0;
}
