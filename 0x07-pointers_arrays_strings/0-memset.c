#include "main.h"

/**
  * *_memset - fills the first n bytes of the memory area pointed
  * to by s with the constant byte
  * @s - a pointer to the memory area to be filled
  * @b - the char to fill the memory area with
  * @n - number of bytes to be filled
  *
  * Return: pointer to a memory area s
  */

char *_memset(void *s, int b, size_t n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
