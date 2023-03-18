#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int combo;

	for (combo = 48; combo <= 57; combo++)
	{
		putchar(combo);

		if (combo == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
