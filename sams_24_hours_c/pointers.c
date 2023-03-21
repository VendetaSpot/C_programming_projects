#include <stdio.h>

int main()
{
  char c, *ptr_c;
  int x, *ptr_x;
  float y, *ptr_y;

  c = 'A';
  x = 7;
  y = 123.45;

  printf("c: address=%p, content=%c\n", &c, c);
  // c: address=000000e03ebffe7f, content=A
  printf("x: address=%p, content=%d\n", &x, x);
  // x: address=000000e03ebffe6c, content=7
  printf("y: address=%p, content=%f\n", &y, y);
  // y: address=000000e03ebffe5c, content=123.449997

  ptr_c = &c;
  ptr_x = &x;
  ptr_y = &y;

  printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c); 
  // ptr_c: address=000000e03ebffe70, content=000000e03ebffe7f
  printf("*ptr_c => %c\n", *ptr_c); // 
  // *ptr_c => A
  printf("ptr_x: address=%p, content=%p\n", &ptr_x, ptr_x);
  // ptr_x: address=000000e03ebffe60, content=000000e03ebffe6c
  printf("*ptr_x => %d\n", *ptr_x);
  // *ptr_x => 7
  printf("ptr_y: address=%p, content=%p\n", &ptr_y, ptr_y);
  // ptr_y: address=000000e03ebffe50, content=000000e03ebffe5c
  printf("*ptr_y => %f\n", *ptr_y);
  // *ptr_y => 123.449997
  
  // printf("check: %d", ptr_x); // output will be numerical value of the address ptr_x holds.

  /* ----> update variable via pointer ----->
  int x, *ptr_x;
  ptr_x = &x;
  
  x = 0;
  printf("x: %d\n", *ptr_x);

  *ptr_x = 10;
  printf("x: %d\n", *ptr_x);
  printf("x original: %d\n", x);
  */
  
  return 0;
}