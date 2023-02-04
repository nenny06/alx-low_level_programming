#include "main.h"

/**
 * clear_bit - sets thre value of a bit at a given inde toi 0
 * @n: a pointer to the bit
 * @index: the index to set the value at - indices start at 0
 * Return: if error occurs -1
 * otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
