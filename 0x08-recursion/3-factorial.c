#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number whose factorial is to be returned
  *
  * Return: returns the factorial of n
  */

int factorial(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
