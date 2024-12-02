// date_selection.c
#include <stdio.h>
#include <time.h>
#include "date_selection.h"

// Generate and print date (today, tomorrow, the day after tomorrow)
void get_dates(char dates[3][11]) {
    time_t t = time(NULL);
    struct tm today = *localtime(&t);

    // Generate today
    sprintf(dates[0], "%02d/%02d/%04d", today.tm_mday, today.tm_mon + 1, today.tm_year + 1900);

    // Generate tomorrow
    today.tm_mday += 1;
    mktime(&today);
    sprintf(dates[1], "%02d/%02d/%04d", today.tm_mday, today.tm_mon + 1, today.tm_year + 1900);

    // Generate the day after tomorrow
    today.tm_mday += 1;
    mktime(&today);
    sprintf(dates[2], "%02d/%02d/%04d", today.tm_mday, today.tm_mon + 1, today.tm_year + 1900);
}

// Display menu (for date selection) and return choice
int select_date() {
    char dates[3][11];
    get_dates(dates);

    int choice = 0;
    
    printf("Please select a date:\n");
    printf("1. %s (today)\n", dates[0]);
    printf("2. %s (tomorrow)\n", dates[1]);
    printf("3. %s (the day after tomorrow)\n", dates[2]);
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    return choice;
}
