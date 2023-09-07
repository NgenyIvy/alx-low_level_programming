#include <stdio.h>
/**
  *main - A program that prints the size of various computer types
  *Return 0 (Successfull)
  */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

printf("Size of a char is :%lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a int is :%lu byte(s)\n", (unsigned long) sizeof(i));
printf("Size of a long int is :%lu byte(s)\n", (unsigned long) sizeof(li));
printf("Size of a long long int :%lu byte(s)\n", (unsigned long) sizeof(lli));
printf("Size of a float is :%lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
