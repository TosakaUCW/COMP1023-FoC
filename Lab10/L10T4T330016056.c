/*
=============================================
 Name: L10T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int stringLength(char s[]) {
    int res = 0;
    // count
    while (s[res] != '\0') {
        res++;
    }
    return res;
}

int main() {
    // Hint for input
    printf("Input a string: ");

    // char
    char s[50];
    // read str
    // scanf("%s", s);
    fgets(s, sizeof s, stdin);
    
    // print ans
    printf("The length of the string is %d.\n", stringLength(s));
    
    return 0;
}