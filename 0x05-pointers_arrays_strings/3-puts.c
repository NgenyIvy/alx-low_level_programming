#include<stdio.h>
#include"main.h"
/**
  *_puts - prints a string, followed by a new line, to stdout
  *@str: String to print
  */
void _puts(char *str)
{
	if (str != NULL)
		printf("%s\n", str);
}

