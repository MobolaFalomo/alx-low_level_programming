#include "main.h"

/**
  * check -checks for the square root
  * @i: integer
  * @j: integer
  *
  * Return: return integer
  */

int check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number whose square root is to be calculated
  *
  * Return: return -1 if n does not have a natural square root
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
