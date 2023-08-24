#include <stdio.h>
#include "lists.h"

/**
 * print_list - All elements of a linked list are printed
 * @h: Print pointer to the list_t list
 * Return: Number of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
