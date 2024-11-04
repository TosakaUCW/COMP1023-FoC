/*
=============================================
 Name: A2T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read two English letters with a space between them. Then output these two characters in alphabetical order. The character is not case sensitive. If two inputted characters are the same letter, for example a and A, then the output is same as the input. If the user inputs a character that is not an English letter, give a warning.
 ============================================= */
#include <stdio.h>
int main() {
    
    // nested for loop
    for (int i = 1; i <= 7; i++) {
        // nested for loop
        for (int j = 1; j <= 7; j++) {
            
            // decide whether to print
            if (j > 7 - i + 1) {
                printf("~");
            } else {
                printf("*");
            }
        }
        
        // end of line
        printf("\n");
    }
    
    return 0;
}