#include "main.h"
#include<stdio.h>
/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	if (str != NULL)
	{
		char leet_map[26] = {
			'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '4', '3',
			'0', '7', '1', '4', '3', '0', '7', '1', '4', '3', '0', '7',
			'1', '4'
		};
		int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			char c = str[i];

			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				int index = (c >= 'a' && c <= 'z') ? (c - 'a') : (c - 'A');

				str[i] = leet_map[index];

			}
		}
	}
	return (str);
}
