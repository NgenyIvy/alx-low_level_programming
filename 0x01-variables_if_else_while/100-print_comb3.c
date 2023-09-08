#include <stdio.h>
/**
  *main - print all possible different commbinations of two digits
  *Return: 0 Always (Success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			
			if ((i != j) && (i < j))
					{
					if ((i == 0 || 1) && (j != 0 || 1))
					putchar(i +48);
					putchar(j +48);
					if ((i != 8) && (j != 9))
					putchar(44);
					putchar(32);
					}
putchar('\n');
return (0);
}
