/*
=============================================
 Name: A2T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
int main()
{
    // enumerate number
    for (int n = 1; n <= 1000; n++)
    {
        int sum = 0;
        // enumerate the possible divisor
        for (int d = 1; d < n; d++)
            if (n % d == 0)
                // add to sum
                sum += d;

        if (sum != n)
            continue;

        // print divisors
        printf("%d = 1", n);
        for (int d = 2; d < n; d++)
            if (n % d == 0)
                printf("+%d", d);

        // end of line
        printf("\n");
    }

    return 0;
}