#include "main.h"
/**
 * _strspn - gets  length of prefix substring consisting accepted characters
 * @s: pointer to the string to be checked
 * @accept: pointer to the string containing accepted characters
 *
 * Return: the number of bytes in the initial segment of s consisting
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				length++;
				match = 1;
				break;
			}
			accept++;
		}
		if (!match)
			return (length);
		s++;
		accept = accept - length; /* Reset accept to the beginning */
	}

	return (length);
}

