#include "main.h"

/**
* print_alphabet_x10 - print 10 times, alphabet in lowercase,
* followed by new line
*/
void print_alphabet_iix10(void)

{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);
	_putchar ('\n');
	}
}
