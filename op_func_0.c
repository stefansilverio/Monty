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
 * _swap - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @n: line number
 */
void swap(stack_t **stack, unsigned line_number)
{
	stack_t *curr = *stack;
	int store = 0;

	if (curr->next == NULL)
		exit(EXIT_FAILURE);
	store = curr->next->n;
	curr->next->n = curr->n;
	curr->n = store;
}

/**
 * _add - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @n: line number
 */
void add(stack_t **stack, unsigned line_number)
{
	stack_t *curr = *stack;
	int store = 0;

	if (curr->next == NULL)
		exit(EXIT_FAILURE);
	store = (curr->next->n) + (curr->n);
/* call pop */
	curr->n = store;
}

/**
 * _sub - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @n: line number
 */
void sub(stack_t **stack, unsigned line_number)
{
	stack_t *curr = *stack;
	int store = 0;

	if (curr->next == NULL)
		exit(EXIT_FAILURE);
	store = (curr->next->n) - (curr->n);
/* call pop */
	curr->n = store;
}

/**
 * _div - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @n: line number
 */
void div(stack_t **stack, unsigned line_number)
{
	stack_t *curr = *stack;
	int store = 0;

	if (curr->next == NULL)
		exit(EXIT_FAILURE);
	if (curr->n == 0)
		exit(EXIT_FAILURE);
	store = (curr->next->n) / (curr->n);
/* call pop */
	curr->n = store;
}

/**
 * _mul - swaps the data in two nodes
 * @stack: pointer to a stack_t
 * @n: line number
 */
void mul(stack_t **stack, unsigned line_number)
{
	stack_t *curr = *stack, *tmp = NULL;
	int store = 0;

	if (curr->next == NULL)
		exit(EXIT_FAILURE);
	if (curr->n == 0)
		exit(EXIT_FAILURE);
	tmp = curr->next;
	store = (curr->next->n) % (curr->n);
	pop(stack, line_number);
	tmp->n = store;
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
