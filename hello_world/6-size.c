#include<stdio.h>

int main(void)
{
  char c;
  int i;
  long l;
  long long l2;
  float f;

  printf("Size of a char: %ld byte(s)",sizeOf(c));
  printf("Size of an int: %d byte(s)", sizeOf(i));
  printf("Size of a long int: 4 byte(s)" , sizeOf(l));
  printf("Size of a long long int: 8 byte(s)" , sizeOf(l2));
  printf("Size of a float: 4 byte(s)" , sizeOf(f));

  return (0);
}
