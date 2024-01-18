#include "monty.h"
/**
 * freenode - frees nodes in the stack.
 * Return: void.
 */
void freenode(void)
{
	stack_t *tmp;

	tmp = head;
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}