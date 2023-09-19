#include "main.h"

/**
 * uintlen - count how many digits in the passed number.
 * @n:unsigned integer to be counted.
 *
 * Return: number of digits.
 */
unsigned int uintlen(unsigned int n)
{
	if (n / 10 == 0)
		return (1);
	return (uintlen(n / 10) + 1);
}
