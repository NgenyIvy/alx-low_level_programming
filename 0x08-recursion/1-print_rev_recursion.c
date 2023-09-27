#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        write(1, "\n", 1); /* Use write to print a newline character */
        return;
    }

    write(1, s, 1); /* Use write to print the current character */
    _puts_recursion(s + 1); /* Recursively print the rest of the string */
}

