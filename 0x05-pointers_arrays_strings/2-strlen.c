#include "main.h"
/**
  *_strlen - returns length of a string
  *@s: string to print
  *Return: length
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
	s++;
	return (length);
}
