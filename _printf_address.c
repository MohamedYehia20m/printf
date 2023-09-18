#include "main.h"

/**
 * _printf_address - function to handle "%p" format specifier
 * @argument: void pointer to address
 *
 * Description: function that print an address by converting the void pointer
 * to address to char pointer
 *
 * Return: number of characters printed
 */

int _printf_address(va_list ap)
{
	void *argument = va_arg(ap , (void *))
	char *x = (char *)(argument);

	_puts(x);
	return (_strlen(x));
}
