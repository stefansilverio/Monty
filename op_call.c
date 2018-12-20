#include "monty.h"


void is_valid(char *token);

/**
 * call - call appropriate function
 * @tokens: pointer to array of tokens
 * @stack: pointer to a stack
 *
 * Return: nothing
 */
void call(char **tokens, stack_t **stack)
{
	int idx = 0;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", NULL},
		{"pint", _pint},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"sub", _sub},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{NULL, NULL}
	};

	while (ops[idx].opcode)
	{
		if (tokens[0][0] == '#')
			return;
		if (strcmp(tokens[0], ops[idx].opcode) == 0)
		{
			if (ops[idx].f)
				ops[idx].f(stack, line_number);
			break;
		}
		idx++;
	}


	if (strcmp(tokens[0], "push") == 0)
	{
		is_valid(tokens[1]);
		(*stack)->n = atoi(tokens[1]);
	}
	else if (!(ops[idx].opcode))
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				line_number,
				tokens[0]);
		exit(EXIT_FAILURE);
	}
}

/**
 * is_valid - check if second spot of a token array is valid
 * @token: tokens value to check
 */
void is_valid(char *token)
{
	int num = 0, idx;

	for (idx = 0; token[idx]; idx++)
	{
		if (atoi(token[idx]) )

	if (!token || (num == 0 && num != token[0] - '0'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

}
