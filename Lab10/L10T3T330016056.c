/*
=============================================
 Name: L10T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int main() {
    // Hint for input
    printf("Input 2 strings: ");

    // read str
    char s[50], t[50];
    scanf("%s", s);
    scanf("%s", t);
    
    int len1 = 0;
    int len2 = 0;
    
    // get strlen
    for (int i = 0; i < 50; i++) {
        if (s[i] == '\0') break;
        len1++;
    }
    for (int i = 0; i < 50; i++) {
        if (t[i] == '\0') break;
        len2++;
    }
    
    // printf("%d\n%d\n", len1, len2);
    
    // match
    for (int i = 0; i + len2 - 1 < len1; i++) {
        int flag = 1;
        for (int j = 0; j < len2; j++) {
            if (s[i + j] != t[j]) {
                flag = 0;
            }
        }
        
        if (flag == 1) {
            printf("str1 contains str2 at position %d\n", i);
            return 0;
        }
    }
    
    puts("str1 does not contain str2");
    
    return 0;
}