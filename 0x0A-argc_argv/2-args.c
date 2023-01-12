#include <stdio.h>
/**
 * main - prints all arguments passed in commandline
 * @argc: array size
 * @argv: array containing elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
