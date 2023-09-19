#include "main.h"

/**
 * get_spec - selects the correct function to perform the operation
 *               asked by the user.
 * @s: pointer to operation.
 *
 * Return: a pointer to the function that corresponds to the operator
 *              given as a parameter.
 */
int (*get_spec(char s))(va_list ap)
{
	spec_t specs[] = {
		{'c', _printf_character},
		{'s', _printf_string_lowercase},
		{'%', _printf_percentage},
		{'d', _printf_decimal},
		{'i', _printf_integer},
		{'b', _printf_binary},
		{'u', _printf_unsigned_integer},
		{'o', _printf_octal},
		{'x', _printf_hexadecimal_lowercase},
		{'X', _printf_hexadecimal_uppercase},
		{'S', _printf_string_uppercase},
		{'p', _printf_address},
		{'r', _printf_reverse_string},
		{'R', _printf_rot13}
	};
	int i = 0;

	while (i < 14)
	{
		if (s == specs[i].spec)
			return (specs[i].func);
		i++;
	}
	_puts("Error\n");
	exit(99);
}
