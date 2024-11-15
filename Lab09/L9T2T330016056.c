/*
=============================================
 Name: L9T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int f(int n, int m) {
    if (n % m != 0) return 0;
    return f(n / m, m) + 1;
}

int main() {
    // Hint for input
    printf("Please input n and m: ");
    
    // read n
    int n, m;
    scanf("%d%d", &n, &m);
    
    // invalid n
    if (n <= 1) {
        puts("Warning! value of n is invalid!");
        return 0;
    }
    if (m <= 1) {
        puts("Warning! value of m is invalid!");
        return 0;
    }
    
    // print result
    printf("There are %d %d(s) in %d.\n", f(n, m), m, n);
    
    return 0;
}