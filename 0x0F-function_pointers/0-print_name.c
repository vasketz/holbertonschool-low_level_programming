#include "function_pointers.h"
#include <stdio.h>
/**
 * @brief 
 * 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}