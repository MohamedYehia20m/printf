#include "main.h"

/**
 * _printf_string_lowercase - print string on the terminal.
 * @ap: argument pointer.
 *
 * Return: length of the string printed.
 */
int _printf_string_lowercase(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = NULL_STRING;
	_puts(str);
	return (_strlen(str));
}
