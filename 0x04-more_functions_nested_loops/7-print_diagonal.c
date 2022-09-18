#include "main.h"

/**
 * print_diagonal - Starting point
 * @n: Input parameter
 * Return: Answer
 */

void print_diagonal(int n)
{
	int i;
	int c;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
