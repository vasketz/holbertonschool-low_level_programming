#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
/**
 * print_name - This function print name
 * @name: is a pointer
 * @f: is a pointer to function
 */
void print_name(char *name, void (*f)(char *));
#endif
