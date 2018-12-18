#include "monty.h"

/**
 *
 */
int main(void)
{
	stack_t *result = NULL;
	stack_t *head = NULL;

	result = add_node_start(&head, 10);
	result = add_node_start(&head, 20);
	result = add_node_start(&head, 30);
	result = add_node_start(&head, 40);
	result = add_node_start(&head, 50);

	while (result->next)
	{
		printf("%d\n", result->n);
		result = result->next;
	}
	return (0);
}
