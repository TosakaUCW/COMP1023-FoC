/*
=============================================
 Name: A3T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int a[10000];

void bubble_sort(int *a, int n) {
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] > a[i + 1]) {
                flag = 1;
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}

int main() {
    // Hint for input
    printf("Input: ");
    
    
    // n: the number of input
    int n = 0;
    int x;
    while (scanf("%d", &x) && x != -1) {
        if (x <= 0) continue;
        a[++n] = x;
    }
    
    // Sort array
    bubble_sort(a, n);
    
    // Print result
    puts("Output:");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    
    return 0;
}