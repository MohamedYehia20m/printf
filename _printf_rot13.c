#include "main.h"

/**
 * _printf_rot13 - print the string rotated 13
 *		character on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the string printed.
 */
int _printf_rot13(va_list ap)
{
	char *str = rot13(va_arg(ap, char *));

	_puts(str);
	return (_strlen(str));
}
