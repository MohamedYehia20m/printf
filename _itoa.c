#include "main.h"

/**
 * _itoa - convert integer to string.
 * @n: integer to be converted.
 *
 * Return: pointer to string.
 */
char *_itoa(int n)
{
	char *str;
	int nLen = intlen(n);

	str = malloc(sizeof(char) * (nlen + 1));
	if (str == NULL)
		return (NULL);
	str[nlen + 1] = '\0';
	while (nlen != -1)
	{
		str[nlen--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
