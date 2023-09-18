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

int _print_decimal(int argument)
{
	char *x = itoa(argument);

	_puts(x);
	return (intlen(argument));
}
