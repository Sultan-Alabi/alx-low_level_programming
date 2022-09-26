#include "main.h"

/**
 * _memset - Entry point
 * @s: Input
 * @b: input
 * @n: Input
 * Return: Answer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
