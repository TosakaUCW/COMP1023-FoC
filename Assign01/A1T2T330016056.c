/*
=============================================
 Name: A1T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two English letters that could be upper case or lower case. Give the difference between these two letters in English alphabetic order. For example, A to B is 1, A to b is 1, C to A is 2. A warning is given for the invalid input.
 ============================================= */
#include <stdio.h>
int main() {
    
    // define var n
    int n;
    
    // input n
    scanf("%d", &n);
    
    // calc the ans
    n = n % 10 * 100 + n % 100 / 10 * 10 + n / 100;
    
    // print the ans
    printf("reversed number: %d\n", n);
    
    return 0;
}