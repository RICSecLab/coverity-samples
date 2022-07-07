#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void null_ptr_der() {
  int a;
  int *pi = NULL;
  a = *pi;
  printf("%d, %d\n", *pi, a);
  
}