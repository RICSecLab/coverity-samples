#include<stdio.h>
#include<stdlib.h>

int i, j;

void use_uninit_global_val(){
  i = 0;
  printf("i, j = %d, %d\n", i, j);
  
}