/*
=============================================
 Name: L4T6T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two integers, compare them and output the bigger one.
 ============================================= */
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    // Print bigger one
    printf("The bigger number is %d\n", n > m ? n : m);
    return 0;
}