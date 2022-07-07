#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 16

char buf[BUFFERSIZE] = {"hoge"};

void access_ob_global_arr() {
  printf("%s\n", buf[BUFFERSIZE + 1]);
  
}
