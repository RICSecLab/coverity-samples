#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_SIZE 5

int main(int argc, char *argv[]) {
  int array[ARRAY_SIZE];
  int val = 1;
  int i;
  scanf("%d%*c", &i);
  if (i < 0 || i >= ARRAY_SIZE) exit(1); // 境界チェック
  array[i] = val;
  printf("%d\n", array[i]);
  return 0;
}