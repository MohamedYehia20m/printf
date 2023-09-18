#include "main.h"

/**
 * _printf_percentage - print '%'
 * @ap: list of arguments
 *
 * Description: function that prints '%' to handle "%%" in printf format
 *
 * Return: single character '%'
 */

int _printf_percentage(va_list __attribute__((unused)) ap)
{
	_putchar('%');
	return (1);
}
