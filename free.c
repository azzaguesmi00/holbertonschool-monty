#include "monty.h"
/**
 * free - frees nodes in the stack.
 * Return: void.
 */
void free()
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