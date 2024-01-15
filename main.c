#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_nodes();
	return (0);
}

/**
 * create- Creates a node.
 * @i: Number to go inside the node.
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *create(int i)
{
	stack_t *nod;

	nod = malloc(sizeof(stack_t));
	if (nod == NULL)
		errrrrr(4);
	nod->next = NULL;
	nod->prev = NULL;
	nod->n = i;
	return (nod);
}

/**
 * free - Frees nodes in the stack.
 */
void free(void)
{
	stack_t *stak;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		sta = head;
		head = head->next;
		free(stak);
	}
}

/**
 * ad2q- Adds a node to the queue.
 * @new_node: Pointer to the new node.
 * @ln: line number of the opcode.
 */
void ad2q(stack_t **newno __attribute__((unused)) unsigned int i)
{
	stack_t *sta;

	if (newno == NULL || *newno == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *newno;
		return;
	}
	sta = head;
	while (sta->next != NULL)
		sta = sta->next;

	sta->next = *newno;
	(*newno)->prev = sta;
}
