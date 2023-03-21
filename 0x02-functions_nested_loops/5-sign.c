#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: parameter
 * Return: returns 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		return (1);
		_putchar('+');

	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');

	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
