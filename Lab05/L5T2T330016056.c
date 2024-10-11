/*
=============================================
 Name: L5T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program according to the following control flow diagram and output the final value of n.
 ============================================= */
#include <stdio.h>
int main() {
    int n;
    printf("Input an integer n: ");
    scanf("%d", &n);
    
    if (n >= 0) {
        n = -n;
    }
    n = 2 * n;
    
    printf("The final value of n is %d\n", n);
    
    return 0;
}