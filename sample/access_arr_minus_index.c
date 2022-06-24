#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 16

int main(int argc, const char *argv[]) {
  char buf[BUFFERSIZE] = {"hoge"};
  printf("%s\n", buf[-1]);
  return 0;
}
