#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int num_of_times;

	num_of_times = 0;

	while (num_of_times < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		num_of_times++;
		_putchar('\n');
	}
}
