#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - print the last digit of the number stored in variable n
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	a = n % 10;
	printf("last digit of %d is %d", n, a);
	if (a > 5)
	{
		printf("and is greater than 5");
	}
	if (a == 0)
	{
		printf("and is 0");
	}
	if (a < 6 && a != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	/**
	  *it's okay to have no return statement for functions that have void
	  return types
	  */
}
