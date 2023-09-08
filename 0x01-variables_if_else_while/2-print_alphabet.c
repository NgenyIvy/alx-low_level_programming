#include <stdio.h>
/**
  *main - Using putchar to pring a to z
  *Return: 0 Always (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);

}
