#include <stdio.h>
/**
  *main - Prints lowercase alphabet characters in reverse
  *Return: 0 Always (Success)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');
	return (0);
}
