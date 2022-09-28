#include "main.h"

/**
 * _print_rev_recursion - Starting point
 * @s: Input
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

