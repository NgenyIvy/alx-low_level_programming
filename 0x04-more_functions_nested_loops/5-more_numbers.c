#include "main.h"
/**
  *more_numbers - prints numbers 0 to 14
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}

		_putchar('\n');
}
