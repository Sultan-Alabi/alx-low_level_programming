#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Starting point
 * @dest: input
 * @src: input
 * Return: Answer
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
