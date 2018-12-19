#include "monty.h"

unsigned int line_number = 0;

/**
 *
 */
int main(int argc, char *argv[])
{
	char **result = NULL;
	stack_t *head = NULL;
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

/* check count to filter out failures */
	while (getline(&buffer, &n, fp) != 0)
	{
		count++;
		result = tokenize(buffer); /* result is at top of list */
		call(result, &head);
	}

	while (result->next)
	{
		printf("%d\n", result->n);
		result = result->next;
	}

	fclose(fp);

	return (0);
}
#include "monty.h"

/**
 *
 */
stack_t *build_list(stack_t **head)
{
	stack_t *result = NULL;

	result = add_node_start(head, 10);
	result = add_node_start(head, 20);
	result = add_node_start(head, 30);
	result = add_node_start(head, 40);
	result = add_node_start(head, 50);
	result = add_node_start(head, 60);

	return (result);
}
