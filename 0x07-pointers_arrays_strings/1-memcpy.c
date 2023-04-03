#include "main.h"
/**
 * *_memcpy - copies the memory area
 * @dest: The destination memory area
 * @src: The memory area to copy from
 * @n: The Number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/* iterating through i */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
