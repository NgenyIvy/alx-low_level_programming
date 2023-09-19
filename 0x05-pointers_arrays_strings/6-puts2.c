#include "main.h"
#include <stdio.h>

void puts2(char *str) {
    if (str != NULL) {
	    int i;
	    for (i = 0; str[i] != '\0'; i += 2) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}

