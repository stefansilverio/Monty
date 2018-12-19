#include "monty.h"

unsigned int line_number = 0;

/**
 *
 */
int main(int argc, char *argv[])
{
	char **tokens = NULL; /* for tokenized list */
	stack_t *head = NULL; /* pointer to top of stack */
	char *buffer = NULL; /* store getline */
	FILE *fp;
	size_t count = 0, n;

	(void) argc;
	(void) argv;

	fp = fopen(argv[1], "r+");
	if (fp == NULL)
		puts("fail");
/* fopen returns null on failure */

/* check count to filter out failures */
	while (getline(&buffer, &n, fp) != -1)
	{
		count++;
		tokens = tokenize(buffer); /* result is at top of list */
		call(tokens, &head);
	}
	fclose(fp);

	return (0);
}
