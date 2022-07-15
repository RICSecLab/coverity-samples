#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_SIZE 5

void bounds_check_loop_off() {
  int array[ARRAY_SIZE];
  int val = 1;
  int i;
  for(int j = 0; j < ARRAY_SIZE; j++) {
    scanf("%d%*c", &i);

    array[i] = val;
  }
  for(int j = 0; j < ARRAY_SIZE; j++) {
    printf("%d\n", array[j]);
  }
}