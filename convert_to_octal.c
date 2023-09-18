#include "main.h"

/**
 * convert_to_octal - convert decimal base(10) to base(8)
 * @argument: decimal to be converted
 *
 * Description: a function that convert decimal base(10) to base(8) using
 * recursion
 *
 * Return: base(8) parameter
 */

int convert_to_octal(int argument)
{
	int x = argument % 8;
	int y = argument / 8;

	if (y != 0)
		return (x + 10 * (convert_to_octal(y)));
	else
		return (x);
}
