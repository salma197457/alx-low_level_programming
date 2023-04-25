/**_printf- produces output
 * @format:p1
 * Return:int
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int sum = 0;

	if (format == NULL || (format[0] == '%' && format[1] == NULL) || (format[0] == '%' && format[1] == ' ' && format[2] == NULL))
	{
		return (-1)
	}
	for (i = format; 
}
