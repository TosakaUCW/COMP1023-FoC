/*
=============================================
 Name: L6T5T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Assume that a student has 6 courses in one semester. Write a program to input grades for all the courses and the units for each course (units can only be 1 or 3 in UIC) and then calculate sGPA (semester GPA) for this semester.
 ============================================= */
#include <stdio.h>
#include <stdbool.h>
int main() {
    // print Hints
    printf("Please input grade and units for each course (6 courses): ");
    
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 1; i <= 6; i++) {
        char ch;
        int x;
        scanf("%s%d", &ch, &x);
        
        // check x
        if (x != 1 && x != 3) {
            printf("Warning! Invalid grade or unit.\n");
            return 0;
        }
        sum2 += x;
        
        // add sum1
        if (ch == 'A') {
            sum1 += x * 4;
        } else if (ch == 'B') {
            sum1 += x * 3;
        } else if (ch == 'C') {
            sum1 += x * 2;
        } else if (ch == 'D') {
            sum1 += x * 1;
        } else if (ch == 'F') {
            sum1 += x * 0;
        } else {
            printf("Warning! Invalid grade or unit.\n");
            return 0;
        }
    }
    
    // calculate the ans
    double ans = 1.0 * sum1 / sum2;
    
    // print the ans
    printf("The GPA for this semester is: %.2f\n", ans);

    return 0;
}