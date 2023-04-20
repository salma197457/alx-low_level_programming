#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator- executes a function on each element of an array
 * @array:p1
 * @size: p2
 * @action: p3
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
