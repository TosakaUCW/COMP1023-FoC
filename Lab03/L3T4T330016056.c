/*
=============================================
 Name: L3T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Fix the bugs
 ============================================= */
#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    float f;
    scanf("%d%f %c", &i, &f, &ch);
    printf("%d is the ASCII code of '%c'.\n", ch, ch);
    printf("The value of i is %d.\n", i);
    printf("The value of j is %.1f.\n", f);
    return 0;
}
/*
10 20.5 D
68 is the ASCII code of 'D'.
The value of i is 10.
The value of j is 20.5.

10 20.5 D
68 is the ASCII code of 'D'.
The value of i is 10.
The value of j is 20.5.
*/
