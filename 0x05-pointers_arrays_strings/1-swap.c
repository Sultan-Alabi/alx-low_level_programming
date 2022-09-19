#include "main.h"

/**
 * swap_int - Starting point
 * @a: Input parameter
 * @b: Input parameter
 * Return: Answer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
