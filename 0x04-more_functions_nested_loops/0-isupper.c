#include "main.h"
/**
  *_isupper - Checks for uppercase characters
  *@c: Character to be checked
  *Return: 1 for lowercase caracters of 0 for anything else
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
