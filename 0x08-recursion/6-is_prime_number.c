#include "main.h"
/**
 * is_prime_number - determines if a number if prime
 * @n: number to be tested
 * Return: returns 1 if the input integer is a prime number
 * otherwise return 0 if number is not prime
 */
int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;

	return (_is_prime);
}
