#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name of the main file
 * @name: is a pointer
 * @f: is a pointer function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
	{
		(*f)(name);
	}
}
