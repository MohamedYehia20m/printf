#include "main.h"

/**
 * _printf_string_uppercase - function that print string with printable
 * character only
 * @ap: list of argument
 *
 * Description: Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: number of characters to be printed
 */

int _printf_string_uppercase(va_list ap)
{
	char *str = va_arg(ap, char*);
	int i = 0;
	int x;
	int len = _strlen(str);

	while (*(str + i) != '\0')
	{
		x = (int)(*(str + i));
		if ((x < 32) || (x > 127))
			/* subtracting 1 that already added from _strlen() */
			len += _putchar_nonPrintable(*(str + i)) - 1;
		else
			_putchar(*(str + i));
		i++;
	}
	return (len);
}
