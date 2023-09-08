#include <stdio.h>
/**
  *main-Printing a combination of two digits
  *Return:0 Alwasy (success)
  */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
	for (k = 0; k <= 9; k++)
		for (l = 0; l <= 9; l++)
			putchar(i + 48);
			putchar(j + 48);
			putchar(k + 48);
			putchar(l + 48);
return (0);	
}	
