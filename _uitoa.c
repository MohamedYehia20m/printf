#include "main.h"

/**
 * _uitoa - convert integer to string.
 * @n: unsigned integer to be converted.
 *
 * Return: pointer to string.
 */
char *_uitoa(unsigned int n)
{
	char *str;
	int nLen = uintlen(n);

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
