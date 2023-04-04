#include "main.h"
/**
 * _memset - Returns a pointer to the memory area s
 * @s: parameter1
 * @b: parameter2
 * @n: parameter3
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

