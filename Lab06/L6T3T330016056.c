/*
=============================================
 Name: L6T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to print out the following pattern.
 ============================================= */
#include <stdio.h>
#include <stdbool.h>
int main() {
    
    // nested for loop 1
    for (int i = 1; i <= 5; i++) {
        // nested for loop 2
        for (int j = 1; j <= i; j++) {
            // print *
            printf("*");
        }
        
        // print endl
        printf("\n");
    }

    return 0;
}