#include "main.h"
/**
  *print_alphabet_x10 - prints lowercase alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

