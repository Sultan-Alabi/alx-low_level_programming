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
	unsigned int index;
	unsigned char *memory = s,value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
