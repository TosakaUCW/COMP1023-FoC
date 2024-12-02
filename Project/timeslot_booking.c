
#include <stdio.h>
#include <time.h>
#include "timeslot_booking.h"

// Display timeslot menu
void display_timeslots(int is_today) {
    Time current_time;
    if (is_today) {
        // Get current time
        time_t t = time(NULL);
        struct tm now = *localtime(&t);
        current_time.hour = now.tm_hour;
        current_time.minute = now.tm_min;
    } else {
        // If tomorrow / the day after tomorrow,
        // display all timeslots
        current_time.hour = 0;
        current_time.minute = 0;
    }

    printf("Available timeslots:\n");
    for (int i = 9; i <= 16; i++) {
        if (is_today && (i < current_time.hour || (i == current_time.hour && current_time.minute > 0))) {
            continue; // Skipping the time before current time
        }

        // Choose ante meridiem / post meridiem
        const char *meridian = i < 12 ? "am" : "pm";

        printf("%d. %d:00 %s - %d:50 %s\n", i - 8, i, meridian, i, meridian);
    }
    printf("9. Exit\n");
}

// User select timeslot
int select_timeslot(int is_today) {
    display_timeslots(is_today);

    int choice = 0;
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);

    return choice;
}
