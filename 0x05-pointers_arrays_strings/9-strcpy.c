#include "main.h"

/**
  * *_strcpy - copies the string pointed to
  * @dest: char type string
  * @src: char type string
  * Return: return the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
