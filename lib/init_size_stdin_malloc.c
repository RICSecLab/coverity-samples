#include <stdio.h>
#include <stdlib.h>

void init_size_stdin_malloc() {
  size_t size = 10;
  scanf("%ld", &size);
  if(size < 1) exit(1); // exit if size is less than 1
  long *arr = malloc(size * sizeof(long));
  for(int i = 0; i < (int)size; i++) {
    scanf("%ld", &arr[i]);
  }
  for(int i = 0; i < (int)size; i++) {
    printf("%ld\n", arr[i]);
  }
  free(arr);
  
}
