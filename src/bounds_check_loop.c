#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_SIZE 5

int main(int argc, char *argv[]) {
  int array[ARRAY_SIZE];
  int val = 1;
  int i;
  for(int j = 0; j < ARRAY_SIZE; j++) {
    scanf("%d%*c", &i);
    if (i < 0 || i >= ARRAY_SIZE) exit(1); // 境界チェック
    array[i] = val;
  }
  for(int j = 0; j < ARRAY_SIZE; j++) {
    printf("%d\n", array[j]);
  }
  return 0;
}