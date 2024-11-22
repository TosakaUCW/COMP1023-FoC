/*
=============================================
 Name: L10T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int main() {
    // Hint for input
    printf("Input a string: ");

    // read str
    char s[50];
    fgets(s, sizeof s, stdin);
    
    printf("Original str is %s\n", s);
    
    // count
    int cntUpper = 0;
    int cntLower = 0;
    int cntSpace = 0;
    for (int i = 0; i < 50; i++) {
        if (s[i] == '\0') break;
        
        if ('A' <= s[i] && s[i] <= 'Z') {
            cntUpper++;
        } else if ('a' <= s[i] && s[i] <= 'z') {
            cntLower++;
        } else if (s[i] == ' ') {
            cntSpace++;
        }
    }
    
    // print result
    printf("There are %d upper-case letters, %d lower-case letters, %d spaces totally.\n", cntUpper, cntLower, cntSpace);
    
    int idx = 0;
    for (int i = 0; i < 50; i++) {
        if (s[i] != ' ') {
            s[idx++] = s[i];
        }
        
        if (s[i] == '\0') break;
    }
    
    printf("String now is %s\n", s);
    
    return 0;
}