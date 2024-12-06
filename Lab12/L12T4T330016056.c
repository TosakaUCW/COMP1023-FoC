/*
=============================================
 Name: L12T4T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int calculateSum(int m, int n);

int main(int argc, char *argv[]) {
    int m = 0, n = 0;
    int sign_m = 1, sign_n = 1;

    // input m
    if (argv[1][0] == '-') {
        sign_m = -1;
        argv[1]++;
    }
    for (int i = 0; argv[1][i] != '\0'; i++) {
        m = m * 10 + (argv[1][i] - '0');
    }
    m *= sign_m;
    
    // input n
    if (argv[2][0] == '-') {
        sign_n = -1;
        argv[2]++;
    }
    for (int i = 0; argv[2][i] != '\0'; i++) {
        n = n * 10 + (argv[2][i] - '0');
    }
    n *= sign_n;

    // get sum
    int sum = calculateSum(m, n);

    // print answer
    printf("The sum is %d\n", sum);

    return 0;
}

int calculateSum(int m, int n) {
    int sum = 0;
    for (int i = m; i <= n; i++) {
        sum += i;
    }
    return sum;
}
