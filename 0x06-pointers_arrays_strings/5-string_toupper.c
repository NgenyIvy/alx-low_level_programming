#include "main.h"
#include <stddef.h>
/**
  *string_toupper - Changes all lowercase letters of a string to uppercase
  *@str: The input string
  *Return: A pointer to modify string
  */
char *string_toupper(char *str)
{
	if (str != NULL)
	{
		int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}
	return (str);
}
