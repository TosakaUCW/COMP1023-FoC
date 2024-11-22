/*
=============================================
 Name: L10T1T30016056.c
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
    
    // count
    int cnt = 0;
    for (int i = 0; i < 50; i++) {
        if (s[i] == 'a') {
            cnt++;
        }
    }
    
    // print result
    printf("There totally %d 'a' in %s\n", cnt, s);
    
    return 0;
}