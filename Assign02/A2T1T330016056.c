/*
=============================================
 Name: A2T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
int main()
{
    char ch = '#';
    // first for from 1 to 7
    for (int i = 1; i <= 7; i++)
    {
        // print ch for i times
        for (int j = 1; j <= i; j++)
            printf("%c", ch);
        // next line
        printf("\n");
        // change ch to output
        ch = ch == '#' ? '+' : '#';
    }
    // from 6 down to 1
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        // next line
        printf("\n");
        // change ch to output
        ch = ch == '#' ? '+' : '#';
    }
    return 0;
}