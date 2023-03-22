#include "main.h"
/**
 * jack_bauer -  prints every minute of the day
 * Return: returns 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; a <= 9; b++)
		{
			for (c = 0; d <= 9; c++)
			{
				for (d = 0; d <= 5; d++)
				{
					if (a >= 2 && b >= 4)
						break;
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(58);
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}
