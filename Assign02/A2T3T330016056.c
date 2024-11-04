/*
=============================================
 Name: A2T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
int main()
{
    // Hint for input
    printf("Input: ");

    // define the var for input n
    int n;
    scanf("%d", &n);

    // ans variable
    int ans = 0;

    // calc 3 ^ n and 5 ^ n
    int a = 1, b = 1;
    for (int i = 1; i <= n; i++)
        a *= 3, b *= 5;

    // ans = 3 ^ n + 5 ^ n
    ans += a + b;

    printf("Output: %d\n", ans);

    return 0;
}