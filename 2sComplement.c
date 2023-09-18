#include "main.h"

/**
 * 2sComplement - function to calculate 2's complement of unsigned integer
 * @argument: unsigned integer to be converted
 *
 * Description: calculating 2's complementing by subtracting
 * parameter(adding -ve number) then adding one.
 *
 * Return: returns 2's complement of parameter in integer
 */

int 2sComplement(unsigned int argument)
{
	return ((int)(UINT_MAX + argument + 1));
}
