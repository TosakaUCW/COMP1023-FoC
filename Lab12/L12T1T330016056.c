/*
=============================================
 Name: L12T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
// pass the address
void exchange(int *x, int *y);
int main()
{
    int a = 10, b = 20;
    printf("before exchange: a = %d, b = %d\n", a, b);
    // pass the address
    exchange(&a, &b);
    // pass the address
    printf("after exchange: a = %d, b = %d\n", a, b);
    return 0;
}
// pass the address
void exchange(int *x, int *y) {
    // pass the address
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}