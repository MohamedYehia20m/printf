#include "main.h"

/**
 * _printf_character - print character on the terminal.
 * @ap: pointer to operation.
 *
 * Return: 1 (the number of printed characters).
 */
int _printf_character(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
