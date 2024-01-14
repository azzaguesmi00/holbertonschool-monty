#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void nop(stack_t **stak, unsigned int linum)
{
	(void)stak;
	(void)linum;
}


/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void swap(stack_t **stak, unsigned int linum)
{
	stack_t *tm;

	if (stak == NULL || *stak == NULL || (*stak)->next == NULL)
		more_errrrr(8, linum, "swap");
	tm = (*stak)->next;
	(*stak)->next = tm->next;
	if (tm->next != NULL)
		tm->next->prev = *stak;
	tm->next = *stak;
	(*stak)->prev = tm;
	tm->prev = NULL;
	*stak = tm;
}

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
