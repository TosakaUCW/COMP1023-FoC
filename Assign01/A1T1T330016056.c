/*
=============================================
 Name: A1T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two English letters that could be upper case or lower case. Give the difference between these two letters in English alphabetic order. For example, A to B is 1, A to b is 1, C to A is 2. A warning is given for the invalid input.
 ============================================= */
#include <stdio.h>
int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    
    // convert
    if ('a' <= a && a <= 'z') {
        a -= 32;
    }
    // convert
    if ('a' <= b && b <= 'z') {
        b -= 32;
    }
    
    // check valid
    if (a < 'A' || a > 'Z' || b < 'A' || b > 'Z') {
        printf("Input invalid.\n");
        return 0;
    }
    
    if (a > b) {
        char t = a;
        a = b;
        b = t;
    }
    
    // print ans
    printf("The difference is %d\n", b - a);
    
    return 0;
}