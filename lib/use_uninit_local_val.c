#include<stdio.h>
#include<stdlib.h>

void use_uninit_local_val(){
  int i, j;
  i = 0;
  printf("i, j = %d, %d\n", i, j);
  
}