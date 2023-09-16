#include "main.h"

/**
 * intlen - count how many digits in the passed number.
 * @n: integer to be counted.
 *
 * Return: number of digits.
 */
int intlen(int n)
{
	if (n / 10 == 0)
		return (1);
	return (intlen(n / 10) + 1);
}
