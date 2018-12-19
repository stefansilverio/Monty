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
	if (!stack)
		printf("\n");

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
	}

	putchar((*stack)->n)
