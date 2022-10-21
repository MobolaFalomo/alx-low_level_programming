#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: the number of times the char should be printed
  *
  * Return: return void
  */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\');
	}
	if (i <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
