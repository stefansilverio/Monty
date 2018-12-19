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
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", NULL},
		{"pint", _pint},
		{"mul", _mul},
		{"div", _div},
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
			if(ops[idx].f)
				ops[idx].f(stack, line_number);
			break;
		}
		idx++;
	}

	if (strcmp(tokens[0], "push") == 0)
		(*stack)->n = atoi(tokens[1]);
}
