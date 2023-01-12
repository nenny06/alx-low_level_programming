#include <stdio.h>
/**
 * main - prints the name of a program
 * @argc: array size
 * @argv: array containing elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);

	return (0);
}
