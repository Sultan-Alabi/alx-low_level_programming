#include "main.h"

/**
 * _islower - Start point
 *
 * int c - argument
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
