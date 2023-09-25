#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring within a string
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr && (*haystack_ptr == *needle_ptr))
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

