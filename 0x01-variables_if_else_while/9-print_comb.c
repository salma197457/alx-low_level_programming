#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 * Return: returns 0
 */
int main(void)
{
	int i;
	int o;

	for (i = 48; i < 57; i++)
	{
	for (o = i + 1; o <= 57; o++)
	{
	if (i != 0)
	{
	putchar(i);
	putchar(o);
	if (i == 56 && o == 57)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
