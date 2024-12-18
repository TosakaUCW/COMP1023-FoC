#include <stdio.h>
#include "login_module.h"
#include "date_selection.h"
#include "timeslot_booking.h"
#include "classroom_booking.h"

#define MAX_CLASSROOMS 100

int main() {
    // 1. Login
    const char* username = authenticate();
    if (username == NULL) {
        return 0;
    }

    puts("------------------------------");
    
    char dates[3][11];
    get_dates(dates);
    Classroom classrooms[MAX_CLASSROOMS];
    int classroom_count = load_classrooms(classrooms, MAX_CLASSROOMS, dates);
    if (classroom_count == 0) {
        return 0;
    }
    
    while (1) {
        
        // 2. Date Selection
        int date_choice = select_date(dates);

        if (date_choice == 4) {
            printf("Exiting the system.\n");
            return 0;
        }

        printf("You selected: %d\n", date_choice);
        
        puts("------------------------------");
        
        // 3 - 4. Timeslot Booking
        int timeslot_choice = select_timeslot(date_choice == 1); // If today pass 1，else pass 0

        if (timeslot_choice == 9) {
            printf("Exiting the system.\n");
            return 0;
        } else {
            printf("You selected timeslot: %d\n", timeslot_choice);
        }
        
        puts("------------------------------");
        
        // 5. Classroom Booking
        
        int required_size;
        printf("Input the size of classroom: ");
        scanf("%d", &required_size);
        
        int booked = 0;
        for (int i = 0; i < classroom_count; i++) {
            if (classrooms[i].capacity >= required_size) {
                // printf("checked %s\n", classrooms[i].name);
                if (check_and_book_classroom(&classrooms[i], date_choice, timeslot_choice, username)) {
                    printf("Room %s is booked successfully!\n", classrooms[i].name);
                    booked = 1;
                    break;
                }
            }
        }

        if (!booked) {
            printf("No available room!\n");
        }
        
        puts("------------------------------");
        
        char continue_choice;
        printf("Continue (y/n)? ");
        scanf(" %c", &continue_choice);
        
        puts("------------------------------");

        if (continue_choice == 'n') {
            printf("Exiting the system.\n");
            break;
        }
        
    }
    
    return 0;
}