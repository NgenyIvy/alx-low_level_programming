#include <stdio.h>
/**
  *main - Using putchar to print a to z and A to Z
  *Return: 0 Always (Success)
  */
int main(void)
{
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
