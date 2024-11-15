/*
=============================================
 Name: L9T3T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int PowerRec(int m, int n) {
    if (n == 0) return 1;
    return PowerRec(m, n - 1) * m;
}
int PowerLoop(int m, int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= m;
    }
    return res;
}

int main() {
    // Hint for input
    printf("Input m and n: ");
    
    // read n
    int n, m;
    scanf("%d%d", &m, &n);
    
    // invalid
    if (m <= 0) {
        puts("Warning! value of m is invalid!");
        return 0;
    }
    if (n < 1) {
        puts("Warning! value of n is invalid!");
        return 0;
    }
    
    
    // print result
    printf("Product is %d using recursion.\n", PowerRec(m, n));
    printf("Product is %d using loop.\n", PowerLoop(m, n));
    
    return 0;
}