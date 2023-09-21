#include "main.h"
/**
  *_strncpy - copies a string with limited number of characters
  *@dest: Destination string
  *@src:Source string
  *@n:Maximum number of characters to copy from src
  *Return: A pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
