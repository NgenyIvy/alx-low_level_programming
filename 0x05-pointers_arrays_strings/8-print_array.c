#include"main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    int length = strlen(str);

    int start_index = (length - 1) / 2;
    int i;

    for (i = start_index; i < length; i++) {
        putchar(str[i]);
    }
    putchar('\n');
}

