#include "main.h"

/**
 * _printf_integer - print integer on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the integer printed.
 */
int _printf_integer(va_list ap)
{
	int n = va_arg(ap, int), len = 0;
	char *str;

	if (n < 0)
	{
		_putchar('-');
		len++;
		n *= -1;
	}
	str = _itoa(n);
	_puts(str);
	len += _strlen(str);
	return (len);
}
