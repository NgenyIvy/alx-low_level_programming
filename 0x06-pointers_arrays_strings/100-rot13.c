#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	if (str != NULL)
	{
		int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			char c = str[i];

			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				{
					str[i] += 13;
				}
				else
				{
					str[i] -= 13;
				}
			}
		}
	}
	return (str);
}
