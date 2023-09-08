#include <stdio.h>
/**
  *main - Printing a combination of 3 numbers
  *Return: 0 Always (Success)
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
				if ((i < j) && (j < k))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (k != 9)
						putchar(44);
						putchar(32);
				}
	putchar('\n');
	return (0);
}
