#include <stdio.h>
#include <string.h>
#include "classroom_booking.h"

// Initialize Classroom File
void initialize_classroom_file(Classroom *room) {
    char filename[20];
    sprintf(filename, "%s.txt", room->name);

    FILE *file = fopen(filename, "r");
    char buffer[256];
    
    if (file == NULL || (fgets(buffer, sizeof(buffer), file) && !strstr(buffer, room->dates[0]))) {
        
        file = fopen(filename, "w");
        for (int i = 0; i < 3; i++) {
            
            for (int j = 0; j < 8; j++) {
                // room->book_status[i][j] = "Available";
                // fprintf(room->book_status[i][j], "%s", "Available");
                // const char *source = "Available";
                // strcpy(room->book_status[i][j], source);
                snprintf(room->book_status[i][j],
                        sizeof(room->book_status[i][j]),
                        "Available");
                fprintf(file, "%s %s %s\n", 
                        room->dates[i], 
                        room->timeslots[i][j], 
                        room->book_status[i][j]);
            }
        }
    } else {
        fclose(file);
        file = fopen(filename, "r");
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 8; j++) {
                fscanf(file, "%*s%*s%s", room->book_status[i][j]);
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
        
        // classrooms[count].dates = dates;
        for (int i = 0; i < 3; i++) {
           strcpy(classrooms[count].dates[i], dates[i]);
        }
        
        for (int i = 0; i < 3; i++) {
            for (int j = 9; j <= 16; j++) {

                const char *meridian = j < 12 ? "am" : "pm";

                snprintf(classrooms[count].timeslots[i][j - 9], 
                        sizeof(classrooms[count].timeslots[i][j - 9]),
                        "%02d:00%s-%02d:50%s",
                        j, meridian, j, meridian);
            }
        }
        
        initialize_classroom_file(&classrooms[count]);
        count++;
        if (count >= max_classrooms) break;
    }

    fclose(file);
    return count;
}

// Check and Book Classroom
int check_and_book_classroom(Classroom *room, int day_index, int timeslot_index, const char *user_name) {
    // printf("%s %s\n", room->name, room->book_status[day_index - 1][timeslot_index - 1]);
    if (strstr(room->book_status[day_index - 1][timeslot_index - 1], "Available") == NULL) return 0; 
    
    // printf("%d %d\n", day_index, timeslot_index);
    // printf("changed: %s", room->book_status[day_index - 1][timeslot_index - 1]);
    
    strcpy(room->book_status[day_index - 1][timeslot_index - 1], user_name);
    
    // printf(" to: %s\n", room->book_status[day_index - 1][timeslot_index - 1]);
    
    char filename[20];
    sprintf(filename, "%s.txt", room->name);

    FILE *file = fopen(filename, "r");
    FILE *newfile = fopen("temp.txt", "w");
    
    if (file == NULL) {
        printf("Error: Unable to open file for %s\n", room->name);
        return 0;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
                fprintf(newfile, "%s %s %s\n", 
                        room->dates[i], 
                        room->timeslots[i][j], 
                        room->book_status[i][j]);
        }
    }

    fclose(file);
    fclose(newfile);
    
    remove(filename);
    rename("temp.txt", filename);
    
    return 1;
}
