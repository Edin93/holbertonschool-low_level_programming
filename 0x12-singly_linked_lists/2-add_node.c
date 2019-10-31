#include "lists.h"
/**
 * add_node - append a node to a list_t list.
 * @head: pointer to pointer to first node in the list.
 * @str: string of the node to append.
 * Return: address of the new element, NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[l])
		l++;
	new->len = l;
	new->next = *head;
	*head = new;
	return (new);
}
