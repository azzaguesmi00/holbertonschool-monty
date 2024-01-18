#include "monty.h"
#include "monty.h"
/**
 *  create - creates and initializes a new node for a doubly-linked stack.
 * @n: integer
 * Return: node
*/
stack_t *create(int n)
{
	stack_t *nope;

	nope = malloc(sizeof(stack_t));
	if (nope == NULL)
		error(4);
	nope->next = NULL;
	nope->prev = NULL;
	nope->n = n;
	return (nope);
}
