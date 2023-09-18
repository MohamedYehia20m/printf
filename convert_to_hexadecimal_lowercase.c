#include "main.h"

/**
 * convert_to_hexadecimal_lowercase - convert integer
 *		to equivalent hexadecimal (in lowercase letters).
 * @n: integer to be converted.
 *
 * Return: pointer to string.
 */
char *convert_to_hexadecimal_lowercase(int n)
{
	int len = hexLenOf(n), ctr = 0, tmp;
	char *str;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (ctr < len)
	{
		tmp = n % 16;
		if (tmp < 10)
			str[ctr] = tmp + '0';
		else
			str[ctr] = tmp + 'a' - 10;
		n /= 16;
		ctr++;
	}
	str[ctr] = '\0';
	rev_string(str);
	return (str);
}
