#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - rettrns a pointer to a new string which is a duplicate of str
  * @str: the string to be duuplicated
  *
  * Return: returns NULL if str is NULL and insufficient memory
  */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
