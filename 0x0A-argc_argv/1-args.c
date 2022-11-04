#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: count the argument
  * @argv: tells the arguments passed
  *
  * Return: return void
  */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
