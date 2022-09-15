#include "main.h"

/**
 * print_most_numbers - Starting
 *
 * Return: Answer
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j == 2 || j == 4)
		{
			continue;
		}
		else
		{
		_putchar(j + '0');
		}
	}
	_putchar('\n');
}
