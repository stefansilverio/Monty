#include "monty.h"

/**
 * pint - prints the top for the stack
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void pint(stack_t **stack, unsigned int n)
{
	if (!stack)
	{
		fprintf("L%u: can't pint, stack empty\n", n);
		exit(EXIT_FAILURE)
	}

	printf("%d\n", (*stack)->n);
}

/**
 * pchar - prints out a char
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void pchar(stack_t **stack, unsigned int n)
{
	if (!stack)
	{
		fprintf("L%u: can't pchar, stack empty\n", n);
		exit(EXIT_FAILURE)
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf("L%u: can't pchar, value out of range\n", n);
		exit(EXIT_FAILURE)
	}

	putchar((*stack)->n)
}


/**
 * pstr - prints a string
 * @stack: pointered to a stack
 * @n: line number that opcode is call at.
 */
void pstr(stack_t **stack, unsigned int n)
{
	stack_t *node;

	if (!stack)
	{
		putchar("\n");
		return;
	}

	node = *stack;
	while (node)
	{
		if ((node)->n =< 0 || (node)->n > 127)
			break;
		putchar(node->n);
		node = node->next;
	}

	putchar(('\n')
}


