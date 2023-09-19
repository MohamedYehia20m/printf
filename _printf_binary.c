#include "main.h"

/**
 * _printf_binary - print binary equivalent of the
 *					passed integer on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the binary printed.
 */
int _printf_binary(va_list ap)
{
	char *str = convert_to_binary(va_arg(ap, unsigned int));

	_puts(str);
	return (_strlen(str));
}
