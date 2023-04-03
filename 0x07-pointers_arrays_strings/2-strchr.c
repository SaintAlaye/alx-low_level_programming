#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a char in a string
 * @s: The string to search
 * @c: The char to find
 * Return: a pointer to first occurrence of the character
 * c in string s, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
		int a;
		/* iterating through the values */
		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
