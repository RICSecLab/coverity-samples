#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 8

void exec_shell() {
  system("/bin/sh");
}

void bof_rip() {
  char buf[BUFFERSIZE];
  gets(buf);
  printf("%s\n", buf);
  
}
