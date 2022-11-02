#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number whose square root is to be calculated
  *
  * Return: return -1 if n does not have a natural square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
  * actual_sqrt_recursion - recursion to find the natural square root of a num
  * @n: number whose square rrot is to be calculated
  * @i: iterator
  *
  * Return: return the resulting square root
  */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
