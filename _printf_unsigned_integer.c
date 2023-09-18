#include "main.h"

/**
 * _printf_unsigned_integer - print unsigned int
 * @argument: unsigned number to be printed
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

		return (int)(_printf_decimal((unsigned int)(x)));
	}
	else
		return (int)(_printf_decimal((unsigned int)(argument)));
}

