#include "main.h"

/**
 * largest_number - Starting point
 * @a: input
 * @b: inout
 * @c: input
 * Return: Answer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		laergest = c;
	}
	return (largest);
}
