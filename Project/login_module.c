// login_module.c
#include <stdio.h>
#include <string.h>
#include "login_module.h"

int load_accounts(char usernames[][USERNAME_LENGTH], char passwords[][PASSWORD_LENGTH]) {
    FILE *file = fopen("account.txt", "r");
    if (file == NULL) {
        puts("Error: Unable to open account.txt file!");
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s %s", usernames[count], passwords[count]) != EOF) {
        count++;
        if (count >= MAX_USERS) break;
    }

    fclose(file);
    return count;
}

const char* authenticate() {
    char usernames[MAX_USERS][USERNAME_LENGTH];
    char passwords[MAX_USERS][PASSWORD_LENGTH];

    int account_count = load_accounts(usernames, passwords);

    char input_username[USERNAME_LENGTH];
    char input_password[PASSWORD_LENGTH];
    int attempt = 0;

    while (attempt < MAX_ATTEMPTS) {
        printf("Enter username: ");
        scanf("%s", input_username);
        printf("Enter password: ");
        scanf("%s", input_password);

        for (int i = 0; i < account_count; i++) {
            if (strcmp(input_username, usernames[i]) == 0 &&
                strcmp(input_password, passwords[i]) == 0) {
                puts("Login successful!");
                return input_username;
            }
        }
        puts("Invalid account name or password!");
        attempt++;
    }

    puts("You have failed three times!");
    return NULL;
}
