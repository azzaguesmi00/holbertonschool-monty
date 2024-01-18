#include "monty.h"

/**
 * errrrrr - Prints appropiate error messages determined by their error code.
 * @error_code: The error codes are the following:
 * (1) => The user does not give any file or more than one file to the program.
 * (2) => The file provided is not a file that can be opened or read.
 * (3) => The file provided contains an invalid instruction.
 * (4) => When the program is unable to malloc more memory.
 * (5) => When the parameter passed to the instruction "push" is not an int.
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 */
void errrrrr(int error_code, ...)
{
    va_list va;
    char *c;
    int line_number;

    va_start(va, error_code);
    switch (error_code)
    {
    case 1:
        fprintf(stderr, "USAGE: monty file\n");
        break;
    case 2:
        fprintf(stderr, "Error: Can't open file %s\n",
                va_arg(va, char *));
        break;
    case 3:
        line_number = va_arg(va, int);
        c = va_arg(va, char *);
        fprintf(stderr, "L%d: unknown instruction %s\n", line_number, c);
        break;
    case 4:
        fprintf(stderr, "Error: malloc failed\n");
        break;
    case 5:
        fprintf(stderr, "L%d: usage: push integer\n", va_arg(va, int));
        break;
    default:
        break;
    }
    free_nodes();
    exit(EXIT_FAILURE);
}

/**
 * more_errrrr - handles errors.
 * @error_code: The error codes are the following:
 * (6) => When the stack it empty for pint.
 * (7) => When the stack it empty for pop.
 * (8) => When stack is too short for operation.
 * (9) => Division by zero.
 */
void more_errrrr(int error_code, ...)
{
    va_list va;
    char *c;
    int line_number;

    va_start(va, error_code);
    switch (error_code)
    {
    case 6:
        fprintf(stderr, "L%d: can't pint, stack empty\n",
                va_arg(va, int));
        break;
    case 7:
        fprintf(stderr, "L%d: can't pop an empty stack\n",
                va_arg(va, int));
        break;
    case 8:
        line_number = va_arg(va, unsigned int);
        c = va_arg(va, char *);
        fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, c);
        break;
    case 9:
        fprintf(stderr, "L%d: division by zero\n",
                va_arg(va, unsigned int));
        break;
    default:
        break;
    }
    free_nodes();
    exit(EXIT_FAILURE);
}
