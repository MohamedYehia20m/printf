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

unsigned int _printf_unsigned_integer(va_list ap)
{
	int argument = va_arg(ap,int);

	if (argument < 0)
	{
		int x = TwosComplement(argument);

		return (_puts(_itoa(x)));
	}
	else
		return (_puts(_itoa((unsigned int)(argument))));
}

