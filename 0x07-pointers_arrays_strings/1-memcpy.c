#include "main.h"

/**
 * _memcpy - Starting point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Answer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
