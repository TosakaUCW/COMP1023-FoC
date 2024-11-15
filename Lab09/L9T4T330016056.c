/*
=============================================
 Name: L9T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int sumAll(int n) {
    if (n == 1) return 1;
    return sumAll(n - 1) + n;
}

int main() {
    // Hint for input
    printf("Input maxNum: ");
    
    // read n
    int n;
    scanf("%d", &n);
    
    // invalid n
    if (n < 1) {
        puts("Warning! Input of maxNum is invalid!");
        return 0;
    }
    
    // print result
    printf("Sum is %d.\n", sumAll(n));
    
    return 0;
}