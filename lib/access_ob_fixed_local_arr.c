#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 8

void access_ob_fixed_local_arr() {
  char buf[BUFFERSIZE] = {"hoge"};
  printf("%s\n", buf[BUFFERSIZE + 1]);
  
}
