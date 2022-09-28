#include "main.h"

/**
 * factorial - returns the factorial of a given munber.
 * @n: the number to fnd the factorial of.
 *
 * Return: factorial of number
 * -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
