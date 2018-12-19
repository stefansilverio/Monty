#include "monty.h"

/**
 * call - call appropriate function
 * @t: pointer to array of tokens
 * Return: nothing
 */
void call(char **tokens, stack_t *stack)
{
	int idx = 0;
	int line_number = atoi(*t[1]);
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (ops[idx])
	{
		if (strcmp(tokens[0], ops[idx].opcode) == 0)
			ops.f(&stack, line_number);
	}

	if (strcmp(ops[idx].opcode, "push") == 0)
	{

}
