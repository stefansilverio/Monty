#include "monty.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: ptr to head of linked list
 * @n: data to place in node
 * Return: address of new_node
 */
stack_t *add_node_start(stack_t **h, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	tmp = *h;
	*h = new;
	new->next = tmp;
	if (tmp == NULL)
		return (new);
	new->next->prev = new;
	return (new);
}
