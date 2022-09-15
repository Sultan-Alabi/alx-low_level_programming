#include "main.h"

/**
 * _isupper - Start point
 *
 * Return: Returns 1 if c is uppercase
 */

int _isupper(int c)
{
	if ((c => 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
