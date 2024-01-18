#include "monty.h"
/**
 * * printstak - Adds a node to the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: line number of  the opcode.
 */
void printstak(stack_t **stak, unsigned int linum)
{
	stack_t *tt;

	(void) linum;
	if (stak == NULL)
		exit(EXIT_FAILURE);
	tt = *stak;
	while (tt != NULL)
	{
		printf("%d\n", tt->n);
		tt = tt->next;
	}
}
