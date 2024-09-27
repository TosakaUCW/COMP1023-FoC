/*
=============================================
 Name: L4T5T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program
 ============================================= */
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    // print Integer result
    printf("Integer: %d divided by %d is %d\n", n, m, n / m);
    // print Float result
    printf("Float: %d divided by %d is %.2f\n", n, m, 1.0 * n / m);
    return 0;
}