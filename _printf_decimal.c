#include "main.h"

/**
 * _printf_decimal - function that handles "%d" format specifier
 * @ap: list of arguments
 *
 * Description: a function that  a prints a decimal ny converting it to string
 * using atoi() function then passing pointer to its first character to _puts()
 *
 * Return: return number of digits to be printed using intlen()
 */

int _printf_decimal(va_list ap)
{
	int argument = va_arg(ap, int);
	int len = intlen(argument);

	if (argument < 0)
	{
		_putchar('-');
		argument *= -1;
		len++;
	}
	_puts(_itoa(argument));
	return (len);
}
