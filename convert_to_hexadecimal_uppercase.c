#include "main.h"

/**
 * convert_to_hexadecimal_uppercase - convert integer
 *		to equivalent hexadecimal (in uppercase letters).
 * @n: integer to be converted.
 *
 * Return: pointer to string.
 */
char *convert_to_hexadecimal_uppercase(int n)
{
	int len = hexLenOf(n), ctr = 0, tmp;
	char *str;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (ctr <= len)
	{
		tmp = n % 16;
		if (tmp < 10)
			str[ctr] = tmp + '0';
		else
			str[ctr] = tmp + 'A' - 10;
		n /= 16;
		ctr++;
	}
	str[ctr] = '\0';
	rev_string(str);
	return (str);
}
