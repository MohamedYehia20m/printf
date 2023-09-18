#include "main.h"

/**
 * _printf_reverse_string - print the string reversed
 *			on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the string printed.
 */
int _printf_reverse_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	rev_string(str);
	_puts(str);
	return (_strlen(str));
}
