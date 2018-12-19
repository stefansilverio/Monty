#include "monty.h"


/**
 * call - call appropriate function
 * @t: pointer to array of tokens
 * Return: nothing
 */
void call(char **tokens, stack_t **stack)
{
	int idx = 0;
	instruction_t ops[] = {
		{"push", _pall},
		{"pall", _push},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"mul", _mul},
		{"div", _div},
		{"sub", _sub},
		{NULL, NULL}
	};

	while (ops[idx])
	{
		if (strcmp(tokens[0], ops[idx].opcode) == 0)
			ops.f(&stack, line_number);
		idx++;
	}

	if (strcmp(ops[idx].opcode, "push") == 0)
		(*stack)->n = atoi(*token[1])
}
