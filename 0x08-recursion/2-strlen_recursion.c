#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: string
 * return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i +=
			_strlen_recursion(s + 1);
	}
}

