#include <stdio.h>
/**
 *main -  prints the alphabet in lowercase
 *Return: returns 9
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
