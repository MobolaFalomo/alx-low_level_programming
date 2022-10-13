#include <stdio.h>
/**
  * main - Entry
  * Return: Always 0
  */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %li byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %li byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %li byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %li byte(s)\n",
			(unsigned long)sizeof(c));
	printf("size of a float: %li byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
