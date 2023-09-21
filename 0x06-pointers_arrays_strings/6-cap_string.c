#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of every word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
					str[i] == ',' || str[i] == ';' || str[i] == '.' ||
					str[i] == '!' || str[i] == '?' || str[i] == '"' ||
					str[i] == '(' || str[i] == ')' || str[i] == '{' ||
					str[i] == '}')
			{
				i++;
			}
			else if (islower(str[i]))
			{
				str[i] = toupper(str[i]);
				i++;
				while (isalnum(str[i]))
				{
					i++;
				}
			}
			else
			{
				i++;
			}
		}
	}
	return (str);
}
