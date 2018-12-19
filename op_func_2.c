#include "monty.h"

/**
 * _div - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @line_number: line number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	if (curr->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (curr->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	curr->next->n = (curr->next->n) / (curr->n);
	_pop(stack, line_number);
}

/**
 * _mod - mods the data in two nodes
 * @stack: pointer to a stack_t
 * @line_number: line number
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	if (curr->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (curr->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	curr->next->n = (curr->next->n) % (curr->n);
	_pop(stack, line_number);
}

/**
 * _mul - multiply and pop nodes
 * @stack: pointer to stack_t
 * @line_number: number of lines
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	if (curr->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	curr->next->n = (curr->next->n) * (curr->n);
	_pop(stack, line_number);
}

/**
 * _pop - remove the top ele of a stack
 * @stack: pointer to top of a stack
 * @n: line number
 */
void _pop(stack_t **stack, unsigned int n)
{
	stack_t *node;

	(void) n;

	if (!stack || !(*stack))
	{
		fprintf(stdout, "Can't pop an empty stack\n");
		exit(EXIT_FAILURE);
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
