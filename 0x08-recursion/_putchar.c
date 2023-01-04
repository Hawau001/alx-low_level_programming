#include "main.h"
#include <stdio.h>

/**
 * _putchar - write the characters c to stdout
 * @c: the character to print
 * Return: On success 1
 * on error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write (1, &c, 1));
}
