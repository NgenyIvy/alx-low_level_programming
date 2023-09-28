#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = 0;
    int i = 0;

    /* Calculate the length of the string */
    while (s[len] != '\0')
    {
        len++;
    }

    /* Compare characters from the beginning and end of the string */
    while (i < len / 2)
    {
        if (s[i] != s[len - 1 - i])
        {
            return 0; /* Not a palindrome */
        }
        i++;
    }

    return 1; /* It's a palindrome */
}

