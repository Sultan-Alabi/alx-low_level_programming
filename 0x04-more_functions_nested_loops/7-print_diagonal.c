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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (c = 1; c < i; c++)
			{
				_putchar('_');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
