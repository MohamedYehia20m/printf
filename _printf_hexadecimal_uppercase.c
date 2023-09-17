#include "main.h"

/**
 * _printf_hexadecimal_uppercase - print hexadecimal
 *		equivalent of the passed integer on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the hexadecimal printed.
 */
int _printf_hexadecimal_uppercase(va_list ap)
{
	char *str = convert_to_hexadecimal_uppercase(va_arg(ap, int));

	_puts(str);
	return (_strlen(str));
}
