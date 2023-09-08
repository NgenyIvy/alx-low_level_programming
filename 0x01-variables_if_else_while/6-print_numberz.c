#include <stdio.h>
/**
  *main - Print digits of base 10 using putchar
  *Return: 0 Always (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
