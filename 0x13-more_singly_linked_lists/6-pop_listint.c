#include "lists.h"

/**
 * pop_listint -  head node of a linked list to be deleted
 * @head: point to the first element in the linked list
 *
 * Return: the deleted data, or NULL if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
