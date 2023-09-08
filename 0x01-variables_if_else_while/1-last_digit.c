#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - determines the last digit of a number using modulo
  * Return:Always 0 (Success)
  */
int main(void)
{
	int n;
	int Lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdig = n % 10;
	if (Lastdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdig);
	}
	else if (Lastdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastdig);
	}
	else if ((Lastdig < 6) && (Lastdig > 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdig);
	}
	return (0);
}
