/*
=============================================
 Name: L3T3T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Record the output for each input and give the explanations to the output in the comments at the end of the program.
 ============================================= */
#include <stdio.h>
int main()
{
    int percentage, x;
    char ch1, ch2;
    scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
    printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0 * x * percentage / 100);
    return 0;
}
/*
Put outputs and explanations here.
1. 10of100: 10% of 100 is 10.000000
  percentage: 10
  ch1: 'o'
  ch2: 'f'
  x: 100

  The program correctly calculates 10% of 100, which is 10.0.
2. 10 of100: 10%  o -1658699176 is -165869917.600000
  percentage: 10
  ch1: a space character ' '
  ch2: 'o'
  x is incorrectly read due to the space between 10 and of. Instead of reading 100, it picks up an uninitialized value (a garbage value).

  Since x is read as a garbage value (-1658699176), the output is incorrect. 
  The program calculates 10% of -1658699176, which leads to -165869917.6.
3. 10 of 100: 10%  o -1658699176 is -165869917.600000
  percentage: 10
  ch1: a space character ' '
  ch2: 'o'
  x is again incorrectly read due to the spaces and leads to the same garbage value as in the previous case.

  The output is the same as in the previous case because x is read as the same garbage value.
*/
