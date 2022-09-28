#include "main.h"

/**
 * factorial - Starting point
 * @n: Input
 * Return: nothing
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (1 * factorial(n - 1));
	}
}
