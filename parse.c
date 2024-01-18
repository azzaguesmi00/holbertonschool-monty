#include "monty.h"

/**
 * parse_line - Separates each line into tokens to determine
 * which function to call
 * @buff: line from the file
 * @ln: line number
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

char *parse_line(char *buff, int ln)
{
	char *opc, *val;
	 char *c = "\n ";

	if (buff == NULL)
	{
		free(buff);
		buff = NULL;
		errrrrr(4);
	}
	opc = strtok(buff, c);
	if (opc == NULL)
		return;
	val = strtok(NULL, c);

	find_func(opc, val, ln);
}
