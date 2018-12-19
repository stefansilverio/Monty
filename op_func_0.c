#include "monty.h" 

/**
 * push - pushes a node to a stack
 * @stack: head of the stack
 * @n: line number
 */
void push(stack_t **stack, unsigned int n)
{
	stack_t *node = NULL;
	(void) n;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

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
 * @n: line number
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

/**
 * pop - remove the top ele of a stack
 * @stack: pointer to top of a stack
 * @n: line number
 */
void pop(stack **stack, unsigned int n)
{
	stack_t *node;

	if (!stack || !(*stack))
	{
		fprintf("L%u: can't pop an empty stack\n");
		exit(EXIT_FAILURE)
	}

	node = *stack;

	if ((*stack)->next)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	else
		*stack = NULL;

	free(node);
}


