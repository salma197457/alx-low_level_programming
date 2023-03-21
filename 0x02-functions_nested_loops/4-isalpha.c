#include "main.h"

/**
 *_isalpha - checks for alphabetic character.
 *@c: the parameter
 *Return: returns 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return(0);
}
