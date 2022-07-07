#include<stdio.h>
#include <limits.h>

#define SHIFT_VAL 64

//
// shift operator
//
void integer_overflow_shift() {
  char char_shit = 1 << SHIFT_VAL;
  unsigned char uchar_shit = 1 << SHIFT_VAL;

  short int short_shit = 1 << SHIFT_VAL;
  unsigned short int ushort_shit = 1 << SHIFT_VAL;

  int int_shit = 1 << SHIFT_VAL;
  unsigned int uint_shit = 1 << SHIFT_VAL;

  long long_shit = 1 << SHIFT_VAL;
  unsigned long ulong_shit = 1 << SHIFT_VAL;

  long long llong_shit = 1 << SHIFT_VAL;
  unsigned long long ullong_shit = 1 << SHIFT_VAL;

  printf("char shift = %d\n", char_shit);
  printf("unsigned char shift = %u\n", uchar_shit);

  printf("short shift = %d\n", short_shit);
  printf("unsigned short shift = %u\n", ushort_shit);

  printf("int shift = %d\n", int_shit);
  printf("unsigned int shift = %u\n", uint_shit);

  printf("long shift = %ld\n", long_shit);
  printf("unsigned long shift = %lu\n", ulong_shit);

  printf("long long shift = %lld\n", llong_shit);
  printf("unsigned long long shift = %llu\n", ullong_shit);

  
}
