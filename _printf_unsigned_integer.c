#include "main.h"

/**
 * _printf_unsigned_integer - print unsigned int
 * @ap: list of arguments
 *
 * Description: printing unsigned int by converting negative number to it's
 * 2's complement
 *
 * Return: number of digits printed using _print_decimal
 */

int _printf_unsigned_integer(va_list ap)
{
	unsigned int argument = va_arg(ap, unsigned int);

	_puts(_uitoa(argument));
	return ((int)(uintlen(argument)));
}

