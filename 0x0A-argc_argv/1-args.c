#include <stdio.h>
/**
 * main - prints number of arguments passed to program
 * @argc: array size
 * @argv: array containing elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
