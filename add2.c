#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: Interger representing the line number of of the opcode.
 */
void add(stack_t **stak, unsigned int linum)
{
	int all;

	if (stak == NULL || *stak == NULL || (*stak)->next == NULL)
		more_errrrr(8, linum, "add");

	(*stak) = (*stak)->next;
	all = (*stak)->n + (*stak)->prev->n;
	(*stak)->n = all;
	free((*stak)->prev);
	(*stak)->prev = NULL;
}
