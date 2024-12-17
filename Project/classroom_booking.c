#include <stdio.h>
#include <string.h>
#include "classroom_booking.h"

// Initialize Classroom File
void initialize_classroom_file(const char *classroom_name, char dates[3][11]) {
    char filename[20];
    sprintf(filename, "%s.txt", classroom_name);

    FILE *file = fopen(filename, "r");
    char buffer[256];
    
    if (file == NULL || (fgets(buffer, sizeof(buffer), file) && !strstr(buffer, dates[0]))) {
        file = fopen(filename, "w");
        for (int day = 0; day < 3; day++) {
            fprintf(file, "Date: Day %d %s\n", day + 1, dates[day]);
            for (int i = 9; i <= 16; i++) {

                const char *meridian = i < 12 ? "am" : "pm";

                fprintf(file, "%d. %02d:00 %s - %02d:50 %s: Available                \n",
                        i - 8, i, meridian, i, meridian);
            }
        }
    }

    fclose(file);
}

// Load Classrooms
int load_classrooms(Classroom classrooms[], int max_classrooms, char dates[3][11]) {
    FILE *file = fopen("classroom_info.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open classroom_info.txt\n");
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s %d", classrooms[count].name, &classrooms[count].capacity) != EOF) {
        initialize_classroom_file(classrooms[count].name, dates);
        count++;
        if (count >= max_classrooms) break;
    }

    fclose(file);
    return count;
}

// Check and Book Classroom
int check_and_book_classroom(const char *classroom_name, int day_index, int timeslot_index, const char *user_name) {
    char filename[20];
    sprintf(filename, "%s.txt", classroom_name);

    FILE *file = fopen(filename, "r+");
    FILE *newfile = fopen("temp.txt", "w");
    
    if (file == NULL) {
        printf("Error: Unable to open file for %s\n", classroom_name);
        return 0;
    }

    char buffer[256];
    int current_day = 0, current_slot = -1;
    int isFind = 0;

    while (fgets(buffer, sizeof(buffer), file)) {
        if (sscanf(buffer, "Date: Day %d", &current_day) == 1) {
            current_slot = -1;
        }

        if (current_day == day_index) {
            current_slot++;
        }
        
        if (current_day == day_index && current_slot == timeslot_index) {
            if (strstr(buffer, "Available")) {
                fprintf(newfile, "%.24s", buffer);
                fprintf(newfile, "Booked by %s\n", user_name);
                isFind = 1;
                continue;
            }
        }
        
        fputs(buffer, newfile);
    }

    fclose(file);
    fclose(newfile);
    
    remove(filename);
    rename("temp.txt", filename);
    
    return isFind;
}
