#include "main.h"

/**
  * _puts_recursion - prints a string
  * @s: the string to be printed
  *
  * Return: Always 0
  */

void _puts_recursion(char *s)
{
	_puts_recursion(s);
	_putchar('\n');
}
