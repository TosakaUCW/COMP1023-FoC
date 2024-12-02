#include <stdio.h>
#include "login_module.h"

int main() {
    // 1. Login
    if (!authenticate()) {
        return 0;
    }

    puts("------------------------------");
    
    return 0;
}