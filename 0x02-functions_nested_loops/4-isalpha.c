#include "main.h"

/**
 * _isalpha - Start point
 *
 * @c: input parameter
 *
 * Return: 1 (Succerss) 0 (Not)
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c <91))
	{
		return (1)
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
