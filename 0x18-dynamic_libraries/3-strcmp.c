#include "main.h"
/**
 * _strcmp - function which compare two string
 * @s1: first string
 * @s2: second string
 * Return: zero if s1 == s2, neg if s1 < s2, pos if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

