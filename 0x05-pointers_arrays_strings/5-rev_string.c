#include "main.h"
/**
 * rev_string - prints a string, in reverse
 * @s:parameter
 * Return:0
 */
void rev_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
	_putchar(s[x]);
	x++;
	}
	_putchar('\n');
	for (x -= 1 ; x >= 0; x--)
	{
	_putchar(s[x]);
	}
	_putchar('\n');
}
