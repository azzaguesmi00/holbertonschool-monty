#include "monty.h"

/**
 * openfun - open file
 * @fnam: the file name path
 * Return: void
 */

void openfun(char *fnam)
{
	FILE *fdes = fopen(fnam, "r");

	if (fnam == NULL || fdes == NULL)
		errrrrr(2, fnam);

	read_fun(fdes);
	fclose(fdes);
}

/**
 * read__fun - read  file
 * @fdes: pointer to file descriptor
 * Return: void
 */

void read_fun(FILE *fdes)
{
	int ln, fm = 0;
	char *bufff = NULL;
	size_t leng = 0;

	for (ln = 1; getline(&bufff, &leng, fdes) != -1; ln++)
	{
		fm = parse_line(bufff, ln);
	}
	free(fdes);
}
