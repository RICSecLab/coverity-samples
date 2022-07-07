#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 8

void access_ob_dynamic_size_local_arr() {
  int *buf = calloc(BUFFERSIZE, sizeof(int));
  if(!buf) {
    printf("calloc error\n");
    exit(1);
  }
  printf("%d\n", buf[BUFFERSIZE + 1]);
  free(buf);
}
