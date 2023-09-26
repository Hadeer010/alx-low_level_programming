#include "lists.h"

/**
 * sum_listint - calculates listint_t list all data
 * @head: linked list first node
 * Return: TOTAL
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}
