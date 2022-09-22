#include "main.h"

/**
 * reverse_array - Starting point
 * @a: input
 * @n: input
 * Return: Answer
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
