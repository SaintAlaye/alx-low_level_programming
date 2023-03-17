#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that print lowercase but exclude q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCase = 'a';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'e' && lowerCase != 'q')
			putchar(lowerCase);
	}
	putchar('\n');

	return (0);

}
