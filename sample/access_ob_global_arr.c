#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 16

char buf[BUFFERSIZE] = {"hoge"};

int main(int argc, char *argv[]) {
  printf("%s\n", buf[BUFFERSIZE + 1]);
  return 0;
}
