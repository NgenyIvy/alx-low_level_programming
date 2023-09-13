#include "main.h"
/**
  *_islower - Checks for lowercase characters
  *@c: Character to be checked
  *Return: 1 for lowercase caracters of 0 for anything else
  */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
