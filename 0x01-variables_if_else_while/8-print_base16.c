#include <stdio.h>
/**
  *main - Print hexadecimal numbers using putchar
  *Return: 0 Always (Success)
  */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
