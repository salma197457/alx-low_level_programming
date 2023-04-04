#include "main.h"
/**
 * _strpbrk - start
 * @s: input no 1
 * @accept: input no 2
 * Return: return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;
	}
	return ('\0');
}
