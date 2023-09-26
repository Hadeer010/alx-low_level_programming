#include "lists.h"

/**
 * listint_len - returns the linked list elements' number
 * @h: traverse the linked list of type listint_t
 * Return: nodes numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
