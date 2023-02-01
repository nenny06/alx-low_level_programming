#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of singly linked list
 * @h: element to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
