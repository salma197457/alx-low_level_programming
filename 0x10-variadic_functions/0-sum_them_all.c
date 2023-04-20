#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- eturns the sum of all its parameters.
 * @n:p1
 * @...:p2
 * Return:0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ele;
	int sum = 0;
	unsigned int f;

	va_start(ele, n);

	if (n != 0)
	{
		for (f = 0; f < n; f++)
		{
			sum += va_arg(ele, const unsigned int);
		}
		va_end(ele);
		return (sum);
	}
	else
	{
		return (0);
	}
}
