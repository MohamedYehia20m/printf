#include "main.h"

/**
 * _printf_integer - print integer on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the integer printed.
 */
int _printf_integer(va_list ap)
{
	char *str = _itoa(va_arg(ap, int));

	_puts(str);
	return (_strlen(str));
}
