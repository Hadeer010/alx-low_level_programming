#include "lists.h"

/**
 * free_listint - linked list free
 * @head: free listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
