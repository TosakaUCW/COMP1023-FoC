/*
=============================================
 Name: A4T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int main() {
    // Declare
    int arr[5];          
    int *ptr;            

    // Read 5 integers from the user
    printf("Input data: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[4];

    // Output
    printf("Reversed data:");
    for (int i = 4; i >= 0; i--) {
        printf(" %d", *ptr);
        ptr--; // Move the pointer to the previous element
    }
    printf("\n");
    
    return 0;
}