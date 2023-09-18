#include "main.h"

/**
 * _printf_string_uppercase - function that print string with printable
 * character only
 * @str: pointer to char
 *
 * Description: Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: number of characters to be printed
 */

int _printf_string_uppercase(char *str)
{
	int i = 0;
	int x;
	while (*(str + i) != '\0')
	{
		x = (int)(*(str));
		if ((x < 32) || (x > 127))
			_putchar_nonPrintable(*(str + i));
		else
			_putchar(*(str + i));
		i++;
	}
	return (_strlen(str));
}
