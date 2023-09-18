#include "main.h"

/**
 * _printf_octal - print a number base(8)
 * @argument: number to be printed in base(8)
 *
 * Description: funvtion that convert a decimal base(10) to base(8) then
 * print it
 *
 * Return: number of digits to be printed
 */

int _printf_octal(int argument)
{
	int x = convert_to_octal(argument);

	return (_printf_decimal(x));
}
