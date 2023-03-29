#include "main.h"
/**
 * _strcat - this code concatenates two strings,
 * @dest: destination string.
 * @src: source string.
 * Return: the pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int count0 = 0, count1 = 0;

	while (*(dest + count0) != '\0')
	{
		count0++;
	}

	while (count1 >= 0)
	{
		*(dest + count0) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count0++;
		count1++;
	}
	return (dest);
}
