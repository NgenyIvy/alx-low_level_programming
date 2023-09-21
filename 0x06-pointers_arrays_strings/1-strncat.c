#include "main.h"
/**
  *_strncat - Concatenate two strings with limited number of characters
  *@dest: Destination string where result is stored
  *@src: Source string that you want to concatenate
  *@n: Maximum number of bytes to concatenate from source string
  *Return: A pointer to the resulting string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *conca = dest;

	while (*conca != '\0')
	{
		conca++;
	}
	while (*src != '\0' && n > 0)
	{
		*conca = *src;
		conca++;
		src++;
		n--;
	}
	*conca = '\0';
	return (dest);
}
