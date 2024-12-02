// login_module.h
#ifndef LOGIN_MODULE_H
#define LOGIN_MODULE_H

#define MAX_ATTEMPTS 3
#define MAX_USERS 100
#define USERNAME_LENGTH 50
#define PASSWORD_LENGTH 50

int load_accounts(char usernames[][USERNAME_LENGTH], char passwords[][PASSWORD_LENGTH]);
const char* authenticate();

#endif // LOGIN_MODULE_H