#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: is an argument of the main function.
 * @argv: is an argument of the main function.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
        if (*argv[0] != 0)
        printf("%d\n", argc - 1);
        return (0);
}