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

int _printf_unsigned_integer(unsigned int argument)
{
	if (argument < 0)
	{
		int x = 2sComplement(argument);

		return (_printf_decimal(x));
	}
	else
		return (_printf_decimal((int)(argument)));
}

