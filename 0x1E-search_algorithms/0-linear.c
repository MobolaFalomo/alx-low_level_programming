#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers using the
  * linear search algorithm
  *
  * @array: array of integers
  * @size: size of the array
  * @value: value to search for
  * Return: Always EXIT_SUCCESS
  */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
