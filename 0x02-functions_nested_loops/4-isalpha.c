#include "main.h"
/**
  *_isalpha - Checks for alphabetic characters
  *@c: The character to be checked
  *Return: 1 for alphabets abd 0 for anything else
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
