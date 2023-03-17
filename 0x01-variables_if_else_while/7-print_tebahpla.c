#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always ) (Success)
 */

int main(void)
{
	char lower_Case;

	for (lower_Case = 122; lower_Case >= 97; lower_Case--)
		putchar(lower_Case);
	putchar('\n');

	return (0);

}
