#include "main.h"

/**
 * _printf_address - function to handle "%p" format specifier
 * @ap: list of arguments
 *
 * Description: function that print an address by converting the void pointer
 * to address to char pointer
 *
 * Return: number of characters printed
 */

int _printf_address(va_list ap)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	char *x = convert_to_hexadecimal_lowercase(n);

	_puts("0x");
	_puts(x);
	return (_strlen(x) + 2);
}
