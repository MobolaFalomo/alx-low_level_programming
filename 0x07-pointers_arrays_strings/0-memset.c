#include "main.h"

/**
  * *_memset - fills the first n bytes of the memory area pointed to by s with
  * the constant byte b
  * @s - a pointer to the memory area to be filled
  * @b - the char to fill the memory area with
  * @n - number of bytes to be filled
  *
  * Return: pointer to a memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	unsigned int n = 0;
	unsigned char *memory = s;
	unsigned char value = b;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
