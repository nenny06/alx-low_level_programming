#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all posible combinations of three digits
 * numbers must be separated by commas then a space the
 * three digit must be different
 * Return: Always 0
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
				}
				if (d ==  '7' && p == '8')
				continue;
			}
			
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}


