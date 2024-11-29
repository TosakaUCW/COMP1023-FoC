/*
=============================================
 Name: L11T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date {
    int mm, dd, yy;
} a;

struct Date findNextDay(struct Date x) {
    struct Date y = x;
    
    y.dd++;
    if (y.dd > days[y.mm]) {
        y.dd = 1;
        y.mm++;
    }
    if (y.mm > 12) {
        y.mm = 1;
        y.yy++;
    }
    
    return y;
}

int main() {
    // input date
    printf("Input a date by the order of month, day, year: ");
    scanf("%d%d%d", &a.mm, &a.dd, &a.yy);
    
    // check valid
    if (a.yy < 0) {
        puts("Warning! Year input should be positive.");
        return 0;
    }
    
    // check valid
    if (a.mm < 1 || a.mm > 12) {
        puts("Warning! Month input should be ranging in [1, 12].");
        return 0;
    }
    
    // check leap year
    if ((a.yy % 4 == 0 && a.yy % 100 != 0) || (a.yy % 400 == 0)) {
        days[2]++;
    }
    
    // check valid
    if (a.dd > days[a.mm]) {
        puts("Warning! Date input is not real.");
        return 0;
    }

    struct Date b = findNextDay(a);  
    
    printf("The next day of input date is %d/%d/%d.\n", b.mm, b.dd, b.yy);  
    
    return 0;
}