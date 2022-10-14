#include <stdio.h>

/**
  * main - prints the alphabet in lowercase
  *
  * Return: use an empty expression to return void
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	/**
	  *it's okay to have no return statement for functions that have void
	  return types
	 */
}
