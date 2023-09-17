#include "main.c"

/**
 * binLenOf - count length of the binary equivalent.
 * @n: integer to be calculated.
 *
 * Return: length of the binary equivalent.
 */
int binLenOf(int n)
{
	int ctr = 0;

	while (n != 0)
	{
		n /= 2;
		ctr++;
	}
	return (ctr);
}
