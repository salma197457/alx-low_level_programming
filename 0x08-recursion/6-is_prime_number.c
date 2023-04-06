#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);
/**
 * check_prime - fun2 
 * @n: parametr1 
 * @i: parameter2
 * Return :0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * is_prime_number - returns 1 if the input integer
 * @n: input
 * Return: 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
