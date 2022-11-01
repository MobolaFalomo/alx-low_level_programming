#include "main.h"
#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: the cahr to print
  *
  * Return: on success 1, on error return -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

