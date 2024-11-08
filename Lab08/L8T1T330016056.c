/*
=============================================
 Name: L8T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
#include <math.h>

#define SIZE 5

// s[] is for stack
// value from s[0] ~ s[top - 1]
int top;
int s[SIZE];

int main() {
    printf("Input a positive integer: ");
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Warning! You should input a positive integer!\n");
        return 0;
    }
    
    printf("The square root of %d = %f\n", n, sqrt(n));
    printf("The Log10 of %d = %f\n", n, log10(n));
    printf("The natural log of %d = %f\n", n, log(n));

    return 0;
}