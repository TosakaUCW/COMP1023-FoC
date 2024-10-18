/*
=============================================
 Name: L6T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to input a positive integer n, and calculate and output 1) the sum of the even numbers from 1 to n (inclusive), storing the result in the variable sum_even, 2) the sum of odd numbers from 1 to n (inclusive), storing the result in the variable sum_odd, and 3) the difference between these two sums, i.e., sum_even - sum_odd, storing the result in the variable diff. Output a warning if the input n is not positive.
 ============================================= */
#include <stdio.h>
#include <stdbool.h>
int main() {
    // print Hints
    printf("Input an integer: ");
    
    int n;
    scanf("%d", &n);
    
    // check n valid
    if (n <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }
    
    // set the count variable
    int sum_even = 0;
    int sum_odd = 0;
    
    for (int i = 1; i <= n; i += 2) {
        sum_odd += i;
    }
    for (int i = 2; i <= n; i += 2) {
        sum_even += i;
    }
    
    // calc the diff
    int diff = sum_even - sum_odd;
    
    // print result
    printf("sum_even is %d, sum_odd is %d, diff is %d.\n", sum_even, sum_odd, diff);

    return 0;
}