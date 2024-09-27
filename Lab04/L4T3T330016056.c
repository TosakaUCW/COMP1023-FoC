/*
=============================================
 Name: L4T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program
 ============================================= */
#include <stdio.h>
int main (){
    int x = 50, y = 25;
    int temp1, temp2;
    temp1 = x/++y;
    printf("temp1= %d\ty= %d\n", temp1, y);
    y=25;
    temp2 = x/y++;
    printf("temp2= %-7d\ty= %d\n", temp2, y);
    return 0;
}
/* 
Output of

(1)	%7d: 
temp1= 1        y= 26
temp2=       2  y= 26

(2)	%-7d:
temp1= 1        y= 26
temp2= 2        y= 26

Explanation: 

(1)	difference between temp1 and temp2:

temp1 = x/++y => y += 1; temp1 = x / y;
So temp1 = 30 / 26 = 1

temp2 = x/y++ => temp2 = x / y; y += 1;
So temp2 = 30 / 25 = 2

(2)	difference between %7d and %-7d:

When %7d is used, result will be right-aligned.
When %-7d is used, result will be left-aligned.
*/
