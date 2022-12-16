#include "main.h"
/**
 * print_line - prints a straight line using '-'
 * @n: numberof times the lines should be printed
 * Return: void
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('-');
	}
	_putchar('\n');
}
