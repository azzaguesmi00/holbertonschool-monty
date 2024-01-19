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
	 if (*new == NULL)
    {
        // Handle the case where the stack is empty
        fprintf(stderr, "L%d: can't add, stack too short\n", ln);
        exit(EXIT_FAILURE);
    }

    tm = *new;
    tm->next = *new;
    tm->prev = NULL;
    *new = tm;
}
