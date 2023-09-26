#include "lists.h"

/**
 * insert_nodeint_at_index - inserts in a given position inthe linked list
 * @head: point to the list first node
 * @idx: the new node adding index
 * @n: the new node content
 *
 * Return: the new node pointer, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

	}

	return (NULL);
}
