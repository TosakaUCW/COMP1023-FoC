/*
=============================================
 Name: L8T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int differenceASCIICode(char a, char b) {
    return a - b;
}

int main() {
    // Hint
    printf("Please enter two characters: ");
    
    // Define variable
    char a, b;
    // Input
    scanf("%c %c", &a, &b);

    // Print ans
    printf("The difference between character '%c' and '%c' is %d.\n", a, b, differenceASCIICode(a, b));

    return 0;
}