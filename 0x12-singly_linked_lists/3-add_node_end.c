#include "lists.h"
/**
 * add_node_end - at the end of a linked list adds a new node
 * @head: point to pointer to the list_t list
 * @str: the new node string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

last_node->next = new_node;

return (new_node);
}