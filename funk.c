#include "monty.h"

stack_t *create(int n);

/**
 * find_func - find the appropriate function for the opcode
 * @opc: opcode
 * @val: argument of opcode
 * @l_n: line number
 * if 1 nodes will be entered as a queue.
 * Return: void
 */
void find_func(char *opc, char *val, int l_n)
{
	int n;
	int gal;

	instruction_t func_list[] = {
		{"push", adds},
		{"pall", printstak},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{NULL, NULL}};

	if (opc[0] == '#')
		return;

	for (gal = 1, n = 0; func_list[n].opcode != NULL; n++)
	{
		if (strcmp(opc, func_list[n].opcode) == 0)
		{
			call_funk(func_list[n].f, opc, val, l_n);
		}
	}
	if (gal == 1)
		errrrrr(3, l_n, opc);
}

/**
 * call_funk - Calls the required function.
 * @funk: Pointer to the function that is about to be called.
 * @string: string representing the opcode.
 * @val: string representing a numeric value.
 * @l_n: line numeber for the instruction.
 * if 1 nodes will be entered as a queue.
 */
void call_funk(op_func funk, char *string, char *val, int l_n)
{
	stack_t *node;
	int gal;
	int n;

	gal = 1;
	if (strcmp(string, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			gal = -1;
		}
		if (val == NULL)
			errrrrr(5, l_n);
		for (n = 0; val[n] != '\0'; n++)
		{
			if (isdigit(val[n]) == 0)
				errrrrr(5, l_n);
		}
		node = create(atoi(val) * gal);
		
			funk(&node, l_n);
		
	}
	else
		funk(&node, l_n);
}
