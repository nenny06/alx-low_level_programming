#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: the string to be changed
 * Return: A pointer to the changed string
 */
char *string_toupper(char *)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
