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
	
