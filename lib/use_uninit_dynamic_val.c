#include<stdio.h>
#include<stdlib.h>

#define BUFFERSIZE 10

void use_uninit_dynamic_val(){
  int* arr = (int*)malloc(sizeof(int) * BUFFERSIZE);
  printf("%d\n", arr[0] + arr[1]);
  
}