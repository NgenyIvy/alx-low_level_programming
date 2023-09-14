#include "main.h"
/**
  *print_line - prints straight lines
  *@n:Number of times
  *Return:always 0
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		n = 0;
		_putchar('\n');
	}
}
