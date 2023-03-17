#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints alphabets in lower cases'
 * Return: Always 0 (Success/Correct)
 */
int main(void)
{
	/* the character to be written*/
	char lower_Case = 'a';

	/* write the character to stdout */
	for (lower_Case = 'a'; lower_Case <= 'z'; lower_Case++)
		putchar(lower_Case);
	putchar('\n');

	return (0);
}
