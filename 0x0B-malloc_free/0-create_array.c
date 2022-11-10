#include "main.h"
#include <stdlib>

/**
  * *create_array - creates an array of chars
  * @c: the char whose array is to be created
  * @size: the size of the array
  * Return: return NULL, if size is 0 else return a pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	*array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
