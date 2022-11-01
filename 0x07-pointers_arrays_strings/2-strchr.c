#include "main.h"

/**
  * *_strchr - locates a char in a string
  * @s: string to be searched
  * @c: char to be located
  *
  * Return: if c is found - a pointer to the first occurrence
  * if c is not found - return NULL
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
