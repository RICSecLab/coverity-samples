#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a;
  int *pi = NULL;
  a = *pi;
  printf("%d, %d\n", *pi, a);
  return 0;
}