#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator: p1
 * @n: p2
 * Return :0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ele;
	unsigned int i;

	va_start(ele, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			printf("%d%s", va_arg(ele, int), separator);
		}
		else
		{
			printf("%d", va_arg(ele, int));
		}
	}
	printf("\n");
	va_end(ele);


}
