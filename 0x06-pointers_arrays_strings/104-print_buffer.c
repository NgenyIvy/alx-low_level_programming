#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size) {
    int i, j;

    if (size <= 0) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j++) {
            if (j < size) {
                printf("%02x", b[j]);
            } else
	    {
                printf("  ");
            }

            if (j % 2 == 1) 
	    {
                printf(" "); 
            }
        }

        printf(" ");

         for (j = i; j < i + 10; j++) {
            if (j < size && isprint(b[j])) {
                printf("%c", b[j]);
            } else {
                printf(".");
            }
        }

        printf("\n");
    }
}
