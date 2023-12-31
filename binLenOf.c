#include "main.h"

/**
 * binLenOf - count length of the binary equivalent.
 * @n: integer to be calculated.
 *
 * Return: length of the binary equivalent.
 */
int binLenOf(unsigned int n)
{
	int ctr = 0;

	while (n != 0)
	{
		n /= 2;
		ctr++;
	}
	return (ctr);
}
