#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s) {
    if (s != NULL) {
    int length = strlen(s);
    int i;
    for(i= length - 1; i >= 0; i--) {
            printf("%c", s[i]);
        }
        printf("\n");
    }
}

