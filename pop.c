#include "monty.h"
/**
 * pop - Adds a node to the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: Interger representing the line number of of the opcode.
 */
void pop(stack_t **stak, unsigned int linum)
{
	stack_t *tm;

	if (stak == NULL || *stak == NULL)
		more_errrrr(7, linum);

	tm = *stak;
	*stak = tm->next;
	if (*stak != NULL)
		(*stak)->prev = NULL;
	free(stak);
}
