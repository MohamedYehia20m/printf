#include "main.h"

/**
 * _print_decimal - function that handles "%d" format specifier
 * @argument: integer to be printed
 *
 * Description: a function that  a prints a decimal ny converting it to string
 * using atoi() function then passing pointer to its first character to _puts()
 *
 * Return: return number of digits to be printed using intlen()
 */

int _printf_decimal(int argument)
{
	if (argument < 0)
	{
		_putchar('-');
		argument *= -1;
	}
	_puts(_itoa(argument));
	return (intlen(argument));
}
