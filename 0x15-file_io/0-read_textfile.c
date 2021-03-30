#include "holberton.h"
/**
 * read_textfile - read a text file
 * @filename: pointer to path
 * @letters: size of buffer
 * Return: print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, size, print;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	size = read(file, buffer, letters);
	if (size == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	print = write(STDOUT_FILENO, buffer, size);
	if (print != size)
	{
		close(file);
		free(buffer);
		return (0);
	}
	return (print);
}
