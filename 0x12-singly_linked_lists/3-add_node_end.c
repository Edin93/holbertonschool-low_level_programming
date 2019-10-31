#include "lists.h"
/**
 * add_node_end - Append node to list_t list.
 * @head: pointer to pointer to list.
 * @str: string pointer for the string of the new node.
 * Return: address of the new node, NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *temp;

	if (new == NULL || str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
