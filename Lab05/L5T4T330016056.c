/*
=============================================
 Name: L5T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to input the length of the three sides of a triangle, and decide if the three edges can form a triangle. If a length is not positive, output a warning.
 ============================================= */
#include <stdio.h>
int main() {
    
    int a, b, c;
    printf("Please input the 3 lengths of edges: ");
    scanf("%d%d%d", &a, &b, &c);
    
    // printf("%d %d %d\n", a, b, c);
    
    if (a <= 0 || b <= 0 || c <= 0) {
        puts("Warning!");
    } else if (a + b > c && a + c > b && b + c > a) {
        printf("%d, %d, %d can form a triangle!\n", a, b, c);
    } else {
        printf("%d, %d, %d cannot form a triangle!\n", a, b, c);
    }
    
    return 0;
}