#include "main.h"
/**
 *_strlen_recursion - prints len of a string
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	s++;
	return (_strlen_recursion(s) + 1);
	}
	return (0);
}
