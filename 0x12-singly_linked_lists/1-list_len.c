#include "lists.h"
/**
 * print_list- function
 * @h: p1
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
