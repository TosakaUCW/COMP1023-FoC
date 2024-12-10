/*
=============================================
 Name: A4T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date {
    int yy, mm, dd;
};

int main() {
    struct Date a;
    
    // hint for input
    printf("Input date: ");
    // input
    scanf("%d%d%d", &a.yy, &a.mm, &a.dd);
    
    // leap year
    if ((a.yy % 4 == 0 && a.yy % 100 != 0) || (a.yy % 400 == 0)) {
        days[2]++;
    }
    
    int ans = a.dd;
    // calc ans
    for (int i = 1; i < a.mm; i++) {
        ans += days[i];
    }
    
    // print ans
    printf("The total days in this year until the input date: %d\n", ans);
    
    return 0;
}