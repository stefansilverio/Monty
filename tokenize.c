#include "monty.h"

/**
 * tokenize - tokenize a given buffer
 * @buffer: string to tokenize
 *
 * Return: an array
 */
char **tokenize(char *buffer)
{
	char *token = NULL; /* ptr to next token */
	char **store; /* store tokens in array */
	int idx = 0;

	token = strtok(buffer, "  \r\n");

	store = malloc(sizeof(char **) * 3);
	if (store == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	while (token)
	{
		store[idx] = token;
		token = strtok(NULL, " \r\n"); /* pt to next token */
		idx++;
	}

	store[2] = '\0';

	return (store);
}
