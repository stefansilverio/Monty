#include "monty.h"

/**
 * pall - prints a stack
 * @h: pointer to a stack_t
 */
void pall(const stack_t *h)
{
	if (!h)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}


