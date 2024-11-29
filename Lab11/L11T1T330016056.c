/*
=============================================
 Name: L11T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
#include <math.h>

struct Point {
    double x, y;
};
struct Triangle {
    struct Point p1, p2, p3;
} T;

#define LINE_LENGTH(x1,x2,y1,y2) sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))

int main() {
    // input first point
    printf("Enter the coordinates of the 1st point: ");
    scanf("%lf, %lf", &T.p1.x, &T.p1.y);
    // input second point
    printf("Enter the coordinates of the 2nd point: ");
    scanf("%lf, %lf", &T.p2.x, &T.p2.y);
    // input third point
    printf("Enter the coordinates of the 3rd point: ");
    scanf("%lf, %lf", &T.p3.x, &T.p3.y);
    
    
    // calculate the ans
    double ans = 0;
    ans += LINE_LENGTH(T.p1.x, T.p2.x, T.p1.y, T.p2.y);
    ans += LINE_LENGTH(T.p3.x, T.p2.x, T.p3.y, T.p2.y);
    ans += LINE_LENGTH(T.p1.x, T.p3.x, T.p1.y, T.p3.y);
    
    printf("the circumference of the triangle is %f.\n", ans);
    
    return 0;
}