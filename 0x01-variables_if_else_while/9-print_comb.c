#include <stdio.h>

/**
  * main - print all the possible combinations of single digit numbers
  *
  * Return: Always 0
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 10)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
