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

	str = malloc(sizeof(char) * (nLen + 1));
	if (str == NULL)
		return (NULL);
	str[nLen--] = '\0';
	while (nLen != -1)
	{
		str[nLen--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
