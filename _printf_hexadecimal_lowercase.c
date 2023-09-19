#include "main.h"

/**
 * _printf_hexadecimal_lowercase - print hexadecimal
 *		equivalent of the passed integer on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the hexadecimal printed.
 */
int _printf_hexadecimal_lowercase(va_list ap)
{
	char *str = convert_to_hexadecimal_lowercase(va_arg(ap, unsigned int));

	_puts(str);
	return (_strlen(str));
}
