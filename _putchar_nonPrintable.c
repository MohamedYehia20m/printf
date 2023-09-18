#include "main.h"

/**
 * _putchar_nonPrintable - function to handle non=printable characters
 * @c: non-printable character to be printed
 *
 * Description: Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: number of printed characters
 */

int  _putchar_nonPrintable(char c)
{
	int x = (int)c;
	char *y = convert_to_hexadecimal_uppercase(x);

	_puts(y);
	return (_strlen(y));
}
