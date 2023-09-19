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
	int i, ctr = 0;
	int *arr;
	unsigned int argument = va_arg(ap, unsigned int), cparg = argument;

	while (argument / 8 != 0)
	{
		argument /= 8;
		ctr++;
	}
	ctr++;
	arr = malloc(ctr * sizeof(int));
	for (i = 0; i < ctr; i++)
	{
		arr[i] = (cparg % 8);
		cparg /= 8;
	}
	for (i = ctr - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (ctr);
}
