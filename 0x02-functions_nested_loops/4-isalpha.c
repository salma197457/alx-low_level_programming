#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c : int
 *Return: returns 0
*/
int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
