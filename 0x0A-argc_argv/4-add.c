#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - program that add 3 numbers
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > i)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
	     sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
