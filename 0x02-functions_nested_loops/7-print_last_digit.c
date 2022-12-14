#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 * Return: value of the last number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit * "0");
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		-putchar(last_digit * '0');
		return (last_digit);
	}
}