#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * passed
 * @str: pointer to string being duplicated
 * Return: NULL if str is NULL
 * pointer to duplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	/*determining entered len length size*/
	for (size = 0; str[size] != '\0'; size++)
		;

	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	/*copying content of @str into new array*/
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}


