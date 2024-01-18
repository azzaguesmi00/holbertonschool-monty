#include "monty.h"

/**
 * toprint - Prints the top node of the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: Interger representing the line number of of the opcode.
 */
void pint(stack_t **stak, unsigned int linum)
{
	if (stak == NULL || *stak == NULL)
		more_errrrr(6, linum);
	printf("%d\n", (*stak)->n);
}
