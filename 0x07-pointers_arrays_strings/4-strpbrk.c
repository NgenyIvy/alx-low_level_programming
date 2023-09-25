#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr;
	char *accept_ptr;

	while (*s)
	{
		accept_ptr = accept;
		while (*accept_ptr)
		{
			if (*s == *accept_ptr)
			{
				s_ptr = s;
				return (s_ptr);
			}
			accept_ptr++;
		}
		s++;
	}

	return (NULL);
}

