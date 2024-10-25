/*
=============================================
 Name: A1T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two English letters with a space between them. Then output these two characters in alphabetical order. The character is not case sensitive. If two inputted characters are the same letter, for example a and A, then the output is same as the input. If the user inputs a character that is not an English letter, give a warning.
 ============================================= */
#include <stdio.h>
#define check(ch) ('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z')
int main() {
    // Hint for input
    printf("Input: ");
    
    char x, y;
    scanf("%c %c", &x, &y);
    
    if (!check(x)) {
        // x is not an English letter
        printf("Warning! '%c' is not an English letter.\n", x);
        return 0;
    } else if (!check(y)) {
        // y is not an English letter
        printf("Warning! '%c' is not an English letter.\n", y);
        return 0;
    } else {
        // calc the len
        int len1 = x >= 97 ? x - 97 : x - 65;
        int len2 = y >= 97 ? y - 97 : y - 65;
        
        // swap if a > b
        if (len1 > len2) {
            char t = x;
            x = y;
            y = t;
        }
        
        printf("Output: %c %c\n", x, y);
    }
    
    return 0;
}