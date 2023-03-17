#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing all single digits of base 10'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)

		putchar(digits);

	putchar('\n');

	return (0);
}
