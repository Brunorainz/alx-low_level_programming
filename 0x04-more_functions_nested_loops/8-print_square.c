#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Returns: returns nothing
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc2 = 0; inc2 < (size - 1); inc2++)
		{
			putchar('#');
		}

		putchar('#');
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}