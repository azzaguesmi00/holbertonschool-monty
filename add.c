#include "monty.h"
/**
 * adds - Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void adds(stack_t **new, __attribute__((unused))unsigned int ln)
{
	stack_t *tm;

	if (new == NULL || *new == NULL)
		exit(EXIT_FAILURE);
	if (ln == NULL)
	{
		ln = *new;
		return;
	}
	tm = ln;
	ln = *new;
	tm->next = tm;
	tm->prev = ln;
}
