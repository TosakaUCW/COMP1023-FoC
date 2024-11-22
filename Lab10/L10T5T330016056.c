/*
=============================================
 Name: L10T5T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
#include <string.h>

int main() {
    // Hint for input
    printf("Please input some words: ");

    // char
    char s[50];
    // input
    scanf("%s", s);
    
    // count
    int cnt = 0;
    while (strcmp(s, "End")) {
        cnt++;
        scanf("%s", s);
    }
    
    printf("There are totally %d words.\n", cnt);
    
    return 0;
}