#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calc_div(int x, int y) {
  return x / y;
}

void divided_by_zero() {
  int a = 1, b = 0;

  // case 1: direct
  int c = a / 0;
  printf("%d\n", c);

  // case 2: via function
  c = calc_div(a, b);
  printf("%d\n", c);

  
}