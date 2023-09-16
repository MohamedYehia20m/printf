#include "main.h"

/**
 * convert_to_binary - convert integer to binary.
 * @n: integer to be converted.
 *
 * Return: pointer to string.
 */
char *convert_to_binary(int n)
{
	int nlen = intlen(n), i = 0;
	char *str;

	str = malloc(sizeof(char) * (nlen + 1));
	if (str == NULL)
		return (NULL);
	while (i <= nlen)
	{
		str[i] = n % 2;
		n /= 2;
		i++;
	}
	str[i] = '\0';
	rev_string(str);
	return (str);
}
