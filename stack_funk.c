#include "monty.h"


/**
 * add2stak - Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void add2stak(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
	stack_t *tm;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tm = head;
	head = *new_node;
	head->next = tm;
	tm->prev = head;
}


/**
 * printstak - Adds a node to the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: line number of  the opcode.
 */
void printstak(stack_t **stak, unsigned int linum)
{
	stack_t *tm;

	(void) linum;
	if (stak == NULL)
		exit(EXIT_FAILURE);
	tm = *stak;
	while (tm != NULL)
	{
		printf("%d\n", tm->n);
		tm = tm->next;
	}
}

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
	free(tm);
}

/**
 * toprint - Prints the top node of the stack.
 * @stak: Pointer to a pointer pointing to top node of the stack.
 * @linum: Interger representing the line number of of the opcode.
 */
void toprint(stack_t **stak, unsigned int linum)
{
	if (stak == NULL || *stak == NULL)
		more_err(6, linum);
	printf("%d\n", (*stak)->n);
}