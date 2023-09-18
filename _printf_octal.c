#include "main.h"

/**
 * _printf_octal - print a number base(8)
 * @ap: list of argument
 *
 * Description: funvtion that convert a decimal base(10) to base(8) then
 * print it
 *
 * Return: number of digits to be printed
 */

int _printf_octal(va_list ap)
{
	int argument = va_arg(ap, int);
	int x = convert_to_octal(argument);

	_puts(_itoa(x));
	return (intlen(x));
}
