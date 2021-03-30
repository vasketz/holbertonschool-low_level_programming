#include "holberton.h"
/**
 * append_text_to_file - append the the to an end of file with function
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, print;
	int sz;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		for (sz = 0; text_content[sz]; sz++)
		{}
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	print = write(file, text_content, sz);
	if (print == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
