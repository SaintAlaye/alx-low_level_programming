#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if correct, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int held;

	if (index > 64)
		return (-1);
	held = index;
	for (j = 1; held > 0; j *= 2, held--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
