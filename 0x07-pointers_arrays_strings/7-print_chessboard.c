#include "main.h"
/**
 * print_chessboard - start
 * @a: array
 * Return: returns 0
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int s;

	for (x = 0; x < 8; x++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[s][j]);
		_putchar('\n');
	}
}

