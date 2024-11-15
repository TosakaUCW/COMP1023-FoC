/*
=============================================
 Name: L9T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int f(int n) {
    if (n == 1) return 1;
    return f(n - 1) + n * n;
}

int main() {
    // Hint for input
    printf("Input a positive integer (>=1): ");
    
    // read n
    int n;
    scanf("%d", &n);
    
    // invalid n
    if (n < 1) {
        puts("Warning! A positive integer no smaller than 1 should be input.");
        return 0;
    }
    
    // print result
    printf("Sum is %d when n is %d.\n", f(n), n);
    
    return 0;
}