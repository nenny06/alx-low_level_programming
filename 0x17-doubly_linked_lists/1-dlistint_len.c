#include "lists.h"

/**
 * dlistint_len - count the number of nodes in tbe linkes list
 * @h: pointer to the beginning of a linkes lost
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
