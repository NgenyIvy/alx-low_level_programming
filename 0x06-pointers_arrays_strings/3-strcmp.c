#include "main.h"
/**
  *_strcmp - Compares two strings
  *@s1: First string
  *@s2: Second strin
  *Return: 0 if the string is equal
  *A negative valie if s1 is less than s2
  *A positive value if ss2 is less than s1
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
