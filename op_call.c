#include "monty.h"

/**
 * push - pushes a node to a stack
 * @stack: head of the stack
 * @n: data to place into the node
 */
void push(stack_t **stack, unsigned int n)
{
	stack_t *node = NULL;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = n;
	node->prev = node->next = NULL;

	if (!(*stack))
		(*stack) = node;
	else
	{
		(*stack)->prev = node;
		node->next = *stack;
		*stack = node;
	}
}

/**
 * pall - prints a stack
 * @stack: pointer to a stack_t
 * @n: unsued var
 */
void pall(stack_t **stack, unsigned int n)
{
	(void) n;

	if (!stack || !(*stack))
		return;

	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}


