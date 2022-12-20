#include "main.h"

/**
 * -strlen - returns the length of a string.
 *  @s: char for check
 *  Return: 0
 */
int _strlen(char *s)
{
	int a; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
