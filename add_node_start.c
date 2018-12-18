#include "monty.h"

/**
 * add_node_start - insert node at start
 * @h: ptr to head of linked list
 * @n: data to place in node
 * Return: address of new_node
 */
stack_t *add_node_start(stack_t **h, int n)
{
	stack_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(stack_t));
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
