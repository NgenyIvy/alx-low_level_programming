#include "main.h"
char *_strcpy(char *dest, const char *src) {
    char *original_dest = dest

       while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

   *dest = '\0';

    return original_dest;
}

