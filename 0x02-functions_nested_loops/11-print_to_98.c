#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - print n to 98 counts
  * separated by commas
  * folowed byspace and
  *numbers should be printed in order
  *@n: Parameter to be entered
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count--)
			printf("%d, ", count);
	printf("98\n");
}
