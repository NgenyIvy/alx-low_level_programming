#include "main.h"
/**
  * -strcpy - function that copies a string from source to destination 
  *@dest: copy to
  *@src: copy from
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return (original_dest);
}

