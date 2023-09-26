#include "lists.h"

/**
 * print_listint - prints linked listed all elements
 * @h: print linked list of type listint_t
 * Return: nodes numbers
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
