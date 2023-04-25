#include "main.h"
/**
 * _puts- prints string
 * @str: sting
 * Return: len
 */
int _puts(char *str)
{
        int i = 0;

        while (*str != '\0')
        {
                _putchar(str);
                str++;
                i++;
        }
        return (i);
}
/**
 * _putchar- writes the char to stdout
 * @c: character
 * Return: 1 or -1
 */
int _putchar(int c)
{
        static int i;
        static char buf[OUTPUT_BUF_SIZE];

        if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
        {
                write(1, buf, i);
                i = 0;
        }
        if (c != BUF-FLUSH)
        {
                buf[i++] = c;
	}
	return (1);
}
