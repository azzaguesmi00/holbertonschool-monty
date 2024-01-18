#include "monty.h"

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

