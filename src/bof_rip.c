#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 8

void exec_shell() {
  system("/bin/sh");
}

int main(int argc, char *argv[]) {
  char buf[BUFFERSIZE];
  gets(buf);
  printf("%s\n", buf);
  return 0;
}
