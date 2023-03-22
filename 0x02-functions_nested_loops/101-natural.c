#include <stdio.h>
/**
  * main - prints the sum of all the multiples of
  * 3 or 5 that are below 1024.
  * Return: None
  */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
