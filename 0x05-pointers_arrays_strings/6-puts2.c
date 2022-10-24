#include "main.h"

/**
  * puts2 - prints every other char of a string, starting with the first char
  * @str: string characters
  * Return: void
  */

void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;
	for (index = 0; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');

}
