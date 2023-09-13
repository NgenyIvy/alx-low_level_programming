#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  * Return: ...
  */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
		-putchar((a / 10) + 48);
		-putchar((a % 10) + 48);
		-putchar(':');
		-putchar((b / 10) + 48);
		-putchar((b % 10) + 48);
		-putchar('\n');
		}
	}
}
