#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("CHAR_BIT    :   %d\n\n", CHAR_BIT);
  
  printf("CHAR_MIN    :   %d\n", CHAR_MIN);
  printf("CHAR_MAX    :   %d\n\n", CHAR_MAX);
  
  printf("INT_MIN     :   %d\n", INT_MIN);
  printf("INT_MAX     :   %d\n\n", INT_MAX);
  
  printf("LONG_MAX    :   %lld\n", LONG_LONG_MIN);
  printf("LONG_MIN    :   %lld\n\n", LONG_LONG_MAX);
  
  printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
  printf("SCHAR_MAX   :   %d\n\n", SCHAR_MAX);

  printf("SHRT_MIN    :   %d\n", SHRT_MIN);
  printf("SHRT_MAX    :   %d\n\n", SHRT_MAX);

  printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
  printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
  printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
  printf("USHRT_MAX   :   %d\n\n", (unsigned short) USHRT_MAX);

  printf("Storage size for float : %d \n", sizeof(float));
  printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
  printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
  printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
  printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
  printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
  printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
  printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
  printf("Precision value: %d\n", FLT_DIG );

  return 0;
}

/*
CHAR_BIT    :   8

CHAR_MIN    :   -128
CHAR_MAX    :   127

INT_MIN     :   -2147483648
INT_MAX     :   2147483647

LONG_MAX    :   -9223372036854775808
LONG_MIN    :   9223372036854775807

SCHAR_MIN   :   -128
SCHAR_MAX   :   127

SHRT_MIN    :   -32768
SHRT_MAX    :   32767

UCHAR_MAX   :   255
UINT_MAX    :   4294967295
ULONG_MAX   :   4294967295
USHRT_MAX   :   65535
*/