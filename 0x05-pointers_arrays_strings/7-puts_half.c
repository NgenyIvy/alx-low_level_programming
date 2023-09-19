#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *puts_half - Returns half of the srting
  *@str: String
  *Return:length
  */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = (length - 1) / 2;
	int i;

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
