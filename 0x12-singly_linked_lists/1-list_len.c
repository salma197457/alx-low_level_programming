#include "lists.h"
/**
 * list_len- function
 * @h: p1
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
