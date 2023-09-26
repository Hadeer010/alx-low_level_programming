#include "lists.h"

/**
 * add_nodeint - adds at the beginning of a linked list a new node
 * @head: pointer to the first node in the lis
 * @n: new node content
 * Return: if it fails, returns NULL, when the  success pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
