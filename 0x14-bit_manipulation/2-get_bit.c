#include "holberton.h"
/**
 * get_bit - Get the bit object
 * @n: variable given trough function
 * @index: variable given troght function
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
