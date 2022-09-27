#include "main.h"

/**
 * print_chessboard - Starting point
 * @a: Input
 * Return: New line
 */

void print_chessboard(char (*a)[8])
{
	unsignd int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			putchar('\n');
		}
		putchar(a[i / 8][i - m]);
	}
	putchar('\n');
}
