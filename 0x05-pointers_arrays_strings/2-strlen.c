#include "main.h"

/**
 * _strlen - Input parameter
 * @s: input
 * Return: Answer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
