/*
=============================================
 Name: L7T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

#define SIZE 100

// s[] is for array
// value from s[0] ~ s[n - 1]
int n;
int s[SIZE];

int main() {
    // freopen("tmp.txt", "r", stdin);
    
    printf("Please input a sequence of integers (end with -1): ");
    while (n <= 49) {
        int x;
        scanf("%d", &x);
        if (x == -1) {
            break;
        }
        s[n++] = x;
    }
    
    // empty array
    if (n == 0) {
        puts("Array is empty.");
        return 0;
    }
    
    // input for value to find
    printf("Enter the number you want to search: ");
    int x;
    scanf("%d", &x);
    
    // find value
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            printf("The index of %d in the array is %d.\n", x, i);
            return 0;
        }
    }
    
    printf("%d Not found.\n", x);

    return 0;
}