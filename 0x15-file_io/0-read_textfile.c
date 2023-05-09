#include "main.h"

/**
 * read_textfile - program to read a text file
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: the actual numbers of letter it could print or write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d = -1;
	char *buffer;
	ssize_t read_file;

	if (filename == NULL) /* checking if filename is equal to NULL */
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY); /* opening the file */
	if (file_d < 0)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters)); /* allocating memory */
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	read_file = read(file_d, buffer, letters); /* reading the letters */
	if (read_file < 0)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	read_file = write(STDOUT_FILENO, buffer, read_file); /* writing  */
	close(file_d);
	free(buffer);
	if (read_file < 0)
	{
		return (0);
	}
	return (read_file);
}
