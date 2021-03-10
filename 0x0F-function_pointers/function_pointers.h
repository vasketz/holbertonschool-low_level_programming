#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stddef.h>
/**
 * print_name - This function print name
 * @name: is a pointer
 * @f: is a pointer to function
 */
void print_name(char *name, void (*f)(char *));
/**
 * array_iterator - print each element of array
 *
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
