/*
=============================================
 Name: L4T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program
 ============================================= */
#include <stdio.h>
int main (){
    int i = 10, j = 5;
    float x = 5.0, y;
    y = x / i; 
    // y = j / i;     
    // y = (float)j / i;
    
    printf("%f\n", y);
    return 0;
}
/* 
result of:

(1) 0.500000
(2) 0.000000
(3) 0.500000

explanation:

(1) y = x / i

x is a float variable 5.0
so no matter what type is i
the i will be converted to float 10.0

the result will be 5.0 / 10.0 = 0.5

(2) y = j / i

j is a int variable
and also i

so the result will be 5 / 10 = 0

(3) y = float(j) / i

Firstly, j is converted to float 5.0
and then is equal to the situation in (1)

so the result is 5.0 / 10.0 = 0.5
*/
