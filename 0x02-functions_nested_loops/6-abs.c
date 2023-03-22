#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @x: parameter
 * Return: return 0
 */
int _abs(int x)
{
	int y = 0;

	if (x > 0)
	{
		_putchar(x);
	}
	else if (x == 0)
	{
		_putchar(0);
	}
	else
	{
		y = x / -1;
		_putchar(y);
	}
}
