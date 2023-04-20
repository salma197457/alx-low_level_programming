#include "function_pointers.h"
/**
 * int_index- searches for an integer.
 * @array:p1
 * @size:p2
 * @cmp:p3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (-1);
}
