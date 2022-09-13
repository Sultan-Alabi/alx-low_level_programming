#include "main.h"

/**
 * int _abs(int) - Starting point
 *
 * _abs - absolute value
 *
 * n: input paramter
 *
 * Return: 0, 1
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
