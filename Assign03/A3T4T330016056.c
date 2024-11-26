/*
=============================================
 Name: A3T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
int ZeroInBinary(int n) {
    if (n == 0) return 0;
    return ZeroInBinary(n >> 1) + (n % 2 == 0);
}
int main() {
    // Hint for input
    printf("Input: ");
    // int variable n
    int n;
    // Input n
    scanf("%d", &n);
    // Output answer
    printf("Output: %d\n", ZeroInBinary(n));
    return 0;
}