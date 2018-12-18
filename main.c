#include "monty.h"

/**
 *
 */
int main(int argc, char *argv[])
{
	stack_t *result = NULL, *head = NULL;
	char *buffer = NULL;
	FILE *fp;
	size_t count = 0, n;

	result = build_list(&head);

	while (result->next)
	{
		printf("%d\n", result->n);
		result = result->next;
	}

	fp = fopen(const char *path, const char r+);
/* fopen returns null on failure */

	count = getline(&buffer, &n, fp);
/* check count to filter out failures */
	while (count != -1)
	{
		count = getline(&buffer, &n, fp);
		result = tokenize(result, &buffer); /* result is at top of list */
	}

	while (result->next)
	{
		printf("%d\n", result->n);
		result = result->next;
	}

	fclose(fp);

	return (0);
}
