#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n - input paratmeter
 *
 * Return: 1, 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
	_putchar('\n');
}
