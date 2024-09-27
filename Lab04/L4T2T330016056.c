/*
=============================================
 Name: L4T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program
 ============================================= */
#include <stdio.h>
#define SQUARE(X) (X * X)
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    
    int square_sum = SQUARE(a) + SQUARE(b);
    
    printf("Square sum is %d\n", square_sum);
    
    return 0;
}