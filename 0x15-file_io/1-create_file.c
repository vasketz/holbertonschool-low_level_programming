#include "holberton.h"
/**
 * create_file - create a file with function
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int file, print;
	int sz = 0;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		while (text_content[sz] != '\0')
		{
			sz++;
		}
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (file == -1)
	{
		return (0);
	}
	print = write(file, text_content, sz);
	if (print == -1)
	{
		return (0);
	}
	close(file);
	return (1);
}
