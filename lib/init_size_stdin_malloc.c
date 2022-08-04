#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void init_size_stdin_malloc() {
  int size = 10;
  scanf("%d", &size);
  int int_size = sizeof(int);

  // check integer overflow
  // case: size > 0, int_size > 0
  if(size > INT_MAX/int_size) {
    perror("integer overflow");
    exit(1);
  }
  // case: size < 0
  if(size < 0) {
    perror("invalid size");
    exit(1);
  }

  int* arr = (int *)malloc(size * int_size);
  if(!arr) {
    perror("malloc");
    exit(1);
  }
  for(int i = 0; i < (int)size; i++) {
    arr[i] = i;
  }
  for(int i = 0; i < (int)size; i++) {
    printf("%d\n", arr[i]);
  }
  free(arr);
}
