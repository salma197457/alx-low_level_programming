#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- prints string, followed by a new line.
 * @separator: p1
 * @n: p2
 * Return :0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ele;
	unsigned int i;
	char *str;

	va_start(ele, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ele, char *);
		if (separator != NULL && i != n - 1)
		{
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end(ele);


}
