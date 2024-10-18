/*
=============================================
 Name: L6T7T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read a positive integer number and decide if the number is prime or not. If the inputted number is not positive, give a warning and end the whole program.
 ============================================= */
#include <stdio.h>
#include <stdbool.h>
int main() {
    printf("Input a positive integer: ");

    int n;
    scanf("%d", &n);

    // check n for positive
    if (n <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }

    // a flag variable
    bool f = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // find factor
            f = 0;
            break;
        }
    }

    // print the result
    if (f && n > 1) {
        printf("%d is a prime.\n", n);
    } else {
        printf("%d is not a prime.\n", n);
    }

    return 0;
}