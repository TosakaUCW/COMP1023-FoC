/*
=============================================
 Name: L4T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two integers, compare them and output the bigger one.
 ============================================= */
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    
    // Print add
    printf("%d + %d = %d\n", m, n, m + n);
    // Print sub
    printf("%d - %d = %d\n", m, n, m - n);
    // Print mul
    printf("%d * %d = %d\n", m, n, m * n);
    // Print div
    printf("%d / %d = %d\n", m, n, m / n);
    // Print mod
    printf("%d %% %d = %d\n", m, n, m % n);
    // Print div (float)
    printf("float(%d) / %d = %.6f\n", m, n, 1.0 * m / n);
    return 0;
}