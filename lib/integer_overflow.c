#include<stdio.h>
#include <limits.h>

  //
  // limits values
  //
void integer_overflow() {

  /* char */
  char char_min = CHAR_MIN - 1;
  char char_max = CHAR_MAX + 1;
  printf("min of char = %d\n", char_min);
  printf("max of char = %d\n", char_max);

  /* unsiged char */
  unsigned char uchar_max = UCHAR_MAX + 1;
  printf("max of unsigned char = %u\n", uchar_max);

  /* short int */
  short int short_int_min = SHRT_MIN - 1;
  short int short_int_max = SHRT_MAX + 1;
  printf("min of short int = %d\n", short_int_min);
  printf("max of short int = %d\n", short_int_max);

  /* unsiged short int */
  unsigned short int ushort_int_max = USHRT_MAX + 1;
  printf("max of unsigned short int = %u\n", ushort_int_max);

  /* int */
  int int_min = INT_MIN - 1;
  int int_max = INT_MAX + 1;
  printf("min of int = %d\n", int_min);
  printf("max of int = %d\n", int_max);

  /* unsiged int */
  unsigned int uint_max = UINT_MAX + 1;
  printf("max of unsigned int = %u\n", uint_max);

  /* long */
  long long_min = LONG_MIN - 1;
  long long_max = LONG_MAX + 1;
  printf("min of long = %ld\n", long_min);
  printf("max of long = %ld\n", long_max);

  /* unsiged long */
  unsigned long ulong_max = ULONG_MAX + 1;
  printf("max of unsigned long = %lu\n", ulong_max);

  /* long long */
  long long llong_min = LLONG_MIN - 1;
  long long llong_max = LLONG_MAX + 1;
  printf("min of long long = %lld\n", llong_min);
  printf("max of long long = %lld\n", llong_max);

  /* unsiged long long */
  unsigned long long ullong_max = ULLONG_MAX + 1;
  printf("max of unsigned long long = %llu\n", ullong_max);

  
}
