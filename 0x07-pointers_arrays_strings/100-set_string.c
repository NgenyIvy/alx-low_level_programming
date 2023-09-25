#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: A pointer to a pointer to a char (double pointer)
 * @to: A pointer to the char value to set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}

