/*
=============================================
 Name: L7T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int main() {
    
    printf("Input the size of the array: ");
    int n;
    scanf("%d", &n);
    
    // not positive
    if (n <= 0) {
        puts("Warning! Array size should be positive.");
        return 0;
    }
    
    // input
    int a[n + 1];
    printf("Input %d integers of the array: ", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("The original array is: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    
    // sorting
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    // print
    printf("After sorting, the array in ascending order is: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    
    // print
    printf("After sorting, the array in descending order is: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", a[i]);
    }
    puts("");

    return 0;
}