/*
=============================================
 Name: A3T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include "calc.h"

int main() {
    // Hint for input
    printf("Enter an expression: ");
    
    
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    
    if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%') {
        puts("Warning: Invalid operator.");
        return 0;
    }
    
    printf("%d%c%d=%d\n", a, c, b, calculate(a, c, b));
    
    return 0;
}