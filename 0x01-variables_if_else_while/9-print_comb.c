#include <stdio.h>
/**
  *main - Program printing 0 to 9, each digit followed by a ,
  *Return:0 Always (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
