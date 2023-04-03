#include"main.h"
/**
 *swap_int-swaps the values of two integers.
 *@a:parameter
 *@b:parameter
 *Return:0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
