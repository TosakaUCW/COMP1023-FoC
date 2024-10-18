/*
=============================================
 Name: L6T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read a line of characters and output the number of the character 'c' in this line. The line ends with ENTER key (i.e., '\n'). There is no limit to the number of characters in this line.
 ============================================= */
#include <stdio.h>
int main() {
    // int variable ans for counter
    int ans = 0;

    // print "Input a line of characters: "
    printf("Input a line of characters: ");

    for (char ch = getchar(); ch != '\n'; ch = getchar()) {
        // add the counter
        ans += (ch == 'c');
    }
    
    printf("There are totally %d 'c'.\n", ans);

    return 0;
}