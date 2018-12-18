#include "monty.h"

stack_t *build_list(stack_t **head)
{
	stack_t *result = NULL;

	result = add_node_start(head, 10);
	result = add_node_start(head, 20);
	result = add_node_start(head, 30);
	result = add_node_start(head, 40);
	result = add_node_start(head, 50);
	result = add_node_start(head, 60);

	return (result);
}
