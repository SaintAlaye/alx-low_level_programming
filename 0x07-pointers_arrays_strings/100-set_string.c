#include <stdio.h>
#include "main.h"
/**
 * set_string - Redirect
 * @s: double pointer to address
 * @to: the original pointer
 * Return: chessboard
 */
void set_string(char **s, char *to)
{
	/* storing the original pointer into the double pointer */
	*s = to;
}
