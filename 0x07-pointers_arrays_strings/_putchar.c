#include "main.h"
#include <unistd.h>

/**
 * _putchar -write the character c to stdout
 * @c: the character to print
 *
 * Return: On success of 1.
 * On error, -1 is returned, and errno is set appopriately.
 */
int _putchar(char c)
{
	return(write(1,&c,l));
}
