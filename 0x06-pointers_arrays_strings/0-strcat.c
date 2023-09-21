#include "main.h"
/**
  *_strcat - Concatenate two strings
  *@dest: Destination string pointer with result
  *@src: Source string pointer to be concatenated
  *Return: A pointer to the dets string containing the result
  */
char *_strcat(char *dest, char *src)
{
	char *conc = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (conc);
}
