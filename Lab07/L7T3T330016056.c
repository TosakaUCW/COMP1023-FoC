/*
=============================================
 Name: L7T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int main() {
    
    printf("Input the total number of letters: ");
    int n;
    scanf("%d", &n);
    
    // not positive
    if (n <= 0) {
        puts("Warning! Total number should be a positive integer!");
        return 0;
    }
    
    // input
    char a[n];
    printf("Input %d ASCII codes: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // check valid
    for (int i = 0; i < n; i++) {
        if (!('a' <= a[i] && a[i] <= 'z' || 'A' <= a[i] && a[i] <= 'Z')) {
            puts("Warning! Invalid ASCII code.");
            return 0;
        }
    }
    
    // output
    printf("%s\n", a);

    return 0;
}