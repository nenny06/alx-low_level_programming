#include "main.h"
/**
 * string_toupper - changes lowercase to uppercasee 
 * @n: pointer
 * Return: char
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
