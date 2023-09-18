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
	int argument = va_arg(ap, int);
	int x;

	if (argument < 0)
	{
		x = TwosComplement(argument);
		_puts(_itoa(x));
		return (intlen(x));
	}
	else
	{
		_puts(_itoa((unsigned int)(argument)));
		return (intlen(argument));
	}
}

