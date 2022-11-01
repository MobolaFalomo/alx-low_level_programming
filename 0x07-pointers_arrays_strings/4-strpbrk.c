#include "main.h"

/**
  * *_strpbrk - locates the first occurrence in s
  * @s: the string to be searched
  * @accept: the set of bytes to be searched for
  *
  * Return: returns a pointer to the byte in s that matches one of
  * the bytes in accept or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

