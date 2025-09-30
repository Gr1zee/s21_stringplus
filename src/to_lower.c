#include "to_lower.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void *to_lower(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    // !!!ЗАМЕНИТЬ НА strlen!!!
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }

    char *result = malloc(len + 1);
    if (result == NULL) {
        return NULL; 
    }

    for (size_t i = 0; i < len; i++) {
        result[i] = (char)tolower((unsigned char)str[i]);
    }
    result[len] = '\0'; 

    return result;
}