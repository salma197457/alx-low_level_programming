#include "main.h"
/**
 * _memcpy - Returns a pointer to dest
 * @dest: parameter1
 * @src: parameter2
 * *@n: parameter3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

