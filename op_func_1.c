#include "monty.h"

/**
 * pint - prints the top for the stack
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void _pint(stack_t **stack, unsigned int n)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", n);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

/**
 * pchar - prints out a char
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void _pchar(stack_t **stack, unsigned int n)
{
	if (!stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", n);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", n);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
}


/**
 * pstr - prints a string
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void _pstr(stack_t **stack, unsigned int n)
{
	stack_t *node;
	(void) n;

	if (!stack)
	{
		putchar('\n');
		return;
	}

	node = *stack;
	while (node)
	{
		if (node->n <= 0 || node->n > 127)
			break;
		putchar(node->n);
		node = node->next;
	}

	putchar('\n');
}

/**
 * rotl -The top element of the stack becomes the last one, and the second top
 * element of the stack becomes the first one
 *
 * @stack - pointer to a stack
 * @n - line number
 */
void _rotl(stack_t **stack, unsigned int n)
{
	stack_t *head , *tail;
	(void) n;

	if (!stack || *stack)
		return;
	head = *stack;

	*stack = (*stack)->next;
	head->next = (*stack)->prev = NULL;

	tail = *stack;

	while (tail->next)
		tail = tail->next;
	tail->next = head;
	head->prev = tail;
}
