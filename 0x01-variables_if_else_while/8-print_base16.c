#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 * Return: returns 0
 */
int main(void)
{
	int i;
	int o;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (o = 97; o <= 102; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
