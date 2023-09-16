#include "main.h"
/**
  *print_most_numbers - Prints most numbers
  *Return - Always 0
  */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);
	}
	_putchar('\n');
}
