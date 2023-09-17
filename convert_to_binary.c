#include "main.h"

/**
 * convert_to_binary - convert integer to binary.
 * @n: integer to be converted.
 *
 * Return: pointer to string.
 */
char *convert_to_binary(int n)
{
	int len = binLenOf(n), ctr = 0;
	char *str;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (ctr <= len)
	{
		str[ctr] = n % 2;
		n /= 2;
		ctr++;
	}
	str[ctr] = '\0';
	rev_string(str);
	return (str);
}
