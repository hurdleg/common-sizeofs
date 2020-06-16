/*
 * Display common sizeof()'s for an operating system, such as Windows, MacOSX or
 * Linux.
 *
 * Web Reference: https://www.tutorialspoint.com/cprogramming/c_data_types.htm
 *
 * @author Gerald.Hurdle@AlgonquinCollege.com
 */
#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s name-of-os, such as Windows, Mac, Linux\n", argv[0]);
    return EXIT_FAILURE;
  }

  printf("Operating System => %s\n\n", argv[1]);

  puts("sizeof( datatypes )\n");
  printf("sizeof(int) %lu\n", sizeof(int));
  printf("sizeof(char) %lu\n", sizeof(char));
  printf("sizeof(short) %lu\n", sizeof(short));
  printf("sizeof(long) %lu\n", sizeof(long));
  printf("sizeof(float) %lu\n", sizeof(float));
  printf("sizeof(double) %lu\n", sizeof(double));

  puts("\nsizeof( pointers )\n");

  printf("sizeof(char *) %lu\n", sizeof(char *));
  printf("sizeof(int *) %lu\n", sizeof(int *));
  printf("sizeof(long *) %lu\n", sizeof(long *));
  printf("sizeof(double *) %lu\n", sizeof(double *));

  puts("\nInteger-based datatypes\n");

  printf("CHAR_BIT    :   %d\n", CHAR_BIT);
  printf("CHAR_MAX    :   %d\n", CHAR_MAX);
  printf("CHAR_MIN    :   %d\n", CHAR_MIN);
  printf("INT_MAX     :   %d\n", INT_MAX);
  printf("INT_MIN     :   %d\n", INT_MIN);
  printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
  printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
  printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
  printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
  printf("SHRT_MAX    :   %d\n", SHRT_MAX);
  printf("SHRT_MIN    :   %d\n", SHRT_MIN);
  printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
  printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
  printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
  printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

  puts("\nFloating-point datatypes\n");

  printf("Storage size for float : %d \n", sizeof(float));
  printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
  printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
  printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
  printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
  printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
  printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
  printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
  printf("Precision value: %d\n", FLT_DIG);

  return EXIT_SUCCESS;
}
