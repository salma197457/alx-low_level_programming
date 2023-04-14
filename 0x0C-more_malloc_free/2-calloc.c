#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		s[x] = 0;
	return (s);
}
