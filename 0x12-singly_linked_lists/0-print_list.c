#include "lists.h"
/**
 * print_list - linked list printing
 * @h: pointer to the 1st node
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h =  h->next;
		x++;
	}
	return (x);
}
