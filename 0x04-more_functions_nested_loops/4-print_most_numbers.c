#include "main.h"
/**
 * print_numbers - function
 * Return: 0
*/
void print_numbers(void)
{
	int n = 48;

	 while (n <= 57)
	{
		_putchar(n);
		_putchar('\n');
		if (n == 2 || n == 4)
		{
			continue;
		}
		n++;
	}
}
