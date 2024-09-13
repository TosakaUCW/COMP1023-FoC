/*
=============================================
 Name: L2T2T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: explain overflow
 ============================================= */
#include <stdio.h>
int main()
{
  short int x, y, z;
  x = 32767;
  y = 3;
  z = x + y;
  printf("%d + %d = %d\n", x, y, x + y); // print x+y
  printf("%d + %d = %d\n", x, y, z);     // print z
  return 0;
}

/*
Because of how data types handle overflow in C with the `short int` type. 

1. In the first `printf`, the expression `x + y` is evaluated directly. 

Since `x` and `y` are promoted to `int` for the addition (due to C's "integer promotion" rules), 
the result is computed in the range of a regular 32-bit `int`, 
which can handle the sum 32767 + 3 = 32770 without any overflow.

2. In the second `printf`, the result is stored in the `short int` variable `z`.
A `short int` range from -32768 to 32767. 
The sum 32767 + 3 caused an overflow. 
*/