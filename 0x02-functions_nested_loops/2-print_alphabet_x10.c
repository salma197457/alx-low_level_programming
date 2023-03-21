#include "main.h"
/**
 * print_alphabet_x10 - prints
 * Returns: returs 0
 */
void print_alphabet_x10(void)
{
	int i;
	int o;

	for (o = 0; o <= 9; o++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}

	_putchar('\n');
	}
}
