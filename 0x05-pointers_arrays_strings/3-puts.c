#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: the string to be printed.
 * Return: 0
 */

void _puts(char *str)
{
	int string;

	string = 0;
	
	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;
	}

	_putchar('\n');
}


