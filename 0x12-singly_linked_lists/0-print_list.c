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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
