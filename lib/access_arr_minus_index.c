#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 16

void access_arr_minus_index() {
  char buf[BUFFERSIZE] = {"hoge"};
  printf("%s\n", buf[-1]);
}
