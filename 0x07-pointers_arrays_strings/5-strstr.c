#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to look for
 * Return: the pointer to the beginning of located substring
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	/* iterating through the vaalues */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
