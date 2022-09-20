#include <stdio.h>
#include "main.h"

/**
 * print_array - Starting point
 * @a: input
 * @n: input
 * Return: Answer
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
}
