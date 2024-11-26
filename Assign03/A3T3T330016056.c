/*
=============================================
 Name: A3T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int a[20];

int main() {
    // Hint for input
    printf("Input: ");
    
    // Read a[0] and a[1]
    scanf("%d%d", &a[0], &a[1]);
    
    // Do calc the fib
    for (int i = 2; i <= 19; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    
    // puts("Output:");
    printf("Output:");
    
    // Print fib
    for (int i = 1; i <= 19; i++) {
        printf(" %d", a[i]);
    }
    puts("");
    
    return 0;
}