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

	while (h != NULL)
	{
		printf("[%d] %s\n" _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
