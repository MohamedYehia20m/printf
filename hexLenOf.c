#include "main.h"

/**
 * hexLenOf - count length of the hexadecimal equivalent.
 * @n: integer to be calculated.
 *
 * Return: length of the hexadecimal equivalent.
 */
int hexLenOf(int n)
{
	int ctr = 0;

	while (n != 0)
	{
		n /= 16;
		ctr++;
	}
	return (ctr);
}
