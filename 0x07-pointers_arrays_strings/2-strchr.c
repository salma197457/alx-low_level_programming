#include "main.h"
/**
 * _strchr - Returns a pointer oe null
 * @s: parameter1
 * @c: parameter2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
