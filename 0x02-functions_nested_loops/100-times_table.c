#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
for (mult = 1; mult <= n; mult++)
{
				_putchar(',')8
				_putchar(' ');prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');


