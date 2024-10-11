/*
=============================================
 Name: L5T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to input an integer n and decide if it is multiple of 3 or 8.
 ============================================= */
#include <stdio.h>
int main() {
    
    int n;
    printf("Input an integer n: ");
    scanf("%d", &n);
    
    if (n % 3 == 0 && n % 8 == 0) {
        printf("%d is multiple of both 3 and 8.\n", n);
    } else if (n % 3 == 0) {
        printf("%d is only multiple of 3.\n", n);
    } else if (n % 8 == 0) {
        printf("%d is only multiple of 8.\n", n);
    } else {
        printf("%d is not multiple of 3 or 8.\n", n);
    }
    
    return 0;
}