#include "main.h"

/**
  * *_memcpy - copies n bytes from memory area src to dest
  * @src: memory area to copy from
  * @dest: memory area to copy to
  * @n: the number of bytes to copy from src
  *
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int number = n;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
