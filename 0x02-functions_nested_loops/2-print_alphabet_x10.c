#include "main.h"

/**
 * print_alphabet_x10 - Starting point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
