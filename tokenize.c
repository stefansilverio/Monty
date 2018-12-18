#include "monty.h"

char **tokenize(char *buffer)
{
	char *token = NULL; /* ptr to next token */
	char **store; /* store tokens in array */
	int idx = 0;

	token = strtok(buffer, " ");

/* TODO: error if there are no tokens */

	store = malloc(sizeof(char**) * 3);

/* TODO: free memory */

	while (token)
	{
		store[idx] = token;
		printf("%s\n", store[idx]);
		token = strtok(NULL, " "); /* pt to next token */
		idx++;
	}

	store[2] = '\0';

/* TODO: put null byte at end of array */

	return (store);
}
