#include "main.h"

/**
  * check - checks to see if number is a prime number
  * @i: integer
  * @j: integer
  * Return: integer
  */

int check(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check(i + 1, j));
}

/**
  * is_prime_number - states if number is a prime number
  * @n: input integer
  *
  * Return: return 1 if integer is a prime number and 0 if not
  */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
