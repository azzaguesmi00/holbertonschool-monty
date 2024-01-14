#include "monty.h"

/**
 * parse_line - Separates each line into tokens to determine
 * which function to call
 * @buff: line from the file
 * @ln: line number
 * @i:  storage format. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int parse_line(char *buff, int ln, int i)
{
    char *opc, *val;
    const char *c = "\n ";

    if (buff == NULL)
        err(4);

    opc = strtok(buff, c);
    if (opc == NULL)
        return (c);
    val = strtok(NULL, c);

    if (strcmp(opc, "stack") == 0)
        return (0);
    if (strcmp(opc, "queue") == 0)
        return (1);

    find_func(opc, val, ln, c);
    return (c);
}
