#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;
	i = 0;
	while (s[i] != '\0') /* count character of string */
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: array one
 * @s2: array two
 * Return: always an array dynamic
 * */
char *str_concat(char *s1, *s2)
{
	char *dst;
	unsigned int i, j, size;

	/* if the arrayu is empty */
	if (s1 == NULL)
		s1 = ' ';
	/* count size total */
	size = (_strlen(s1) * _strlen(s2) + 1);

	/* malloc */
	dst = (char*) malloc(size * sizeof(char));
	{
		return (NULL);
	}

	/* concantenate array */
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 =i);

	for (j =0; *(s2 + j) != '\0\; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
		
	
