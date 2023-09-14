#include "main.h"
#include <ctype.h>
/**
  * _isdigit - function to check for a digit
  *@c: Integer to be checked
  *Return: 1 if is is dogot and 0 otherwise
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);

}
