#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * sum_them_all - This function sum all numbers.
 * @n: unsigned variable.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...);
/**
 * print_numbers - of an array with variadic
 * @separator: print space
 * @n: print elements of array
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_numbers - of an array with variadic
 * @separator: print space
 * @n: elements of array
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
