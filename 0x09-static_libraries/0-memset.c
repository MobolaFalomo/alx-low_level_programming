#include "main.h"
#include <stdio.h>

/**
  * _memset - fills the first n bytes of the memory area pointed
  * to by s with the constant byte
  * @s - a pointer to the memory area to be filled
  * @b - the char to fill the memory area with
  * @n - number of bytes to be filled
  *
  * Return: pointer to a memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
