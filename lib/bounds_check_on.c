#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_SIZE 5

void bounds_check() {
  int array[ARRAY_SIZE];
  int val = 1;
  int i;
  scanf("%d%*c", &i);
  if (i < 0 || i >= ARRAY_SIZE) exit(1); // bounds check
  array[i] = val;
  printf("%d\n", array[i]);
}
