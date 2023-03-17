#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints alphabets in lower
 * and upper case  with a new line'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_Case = 'a';
	char upper_Case = 'A';

	for (lower_Case = 'a'; lower_Case <= 'z'; lower_Case++)
		putchar(lower_Case);
	for (upper_Case = 'A'; upper_Case <= 'Z'; upper_Case++)
		putchar(upper_Case);

	putchar('\n');

	return (0);
}
