#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_SIZE 5

void bounds_check_off() {
  int array[ARRAY_SIZE];
  int val = 1;
  int i;
  scanf("%d%*c", &i);

  array[i] = val;
  printf("%d\n", array[i]);
}
