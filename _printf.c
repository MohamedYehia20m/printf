#include "main.h"

/**
* _printf - produces output according to a format.
* @format: pointer to the string format.
*
* Return:  the number of characters printed
* (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, ctr = 0;
	va_list ap;

	if (format == NULL)
		return (0);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ctr += (*get_spec(format[i]))(ap);
		}
		else
		{
			_putchar(format[i]);
			ctr++;
		}
		i++;
	}
	va_end(ap);
	return (ctr);
}
