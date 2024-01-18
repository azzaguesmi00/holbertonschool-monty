#include "monty.h"

/**
 * _pall - prints the stack
 * @stac: stack head
 * @ln: line number
 * Return: void
 */

void _pall(stack_t **stac, unsigned int ln)
{
	stack_t *prints;
	(void)ln;

	prints = *stac;
	if (prints == NULL)
		return;
	while (prints != NULL)
	{
		printf("%d\n", prints->n);
		prints = prints->next;
	}
}