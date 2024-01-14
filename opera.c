#include "monty.h"

/**
 * open_file - opens a file
 * @fnam: the file namepath
 * Return: void
 */

void open_file(char *fnam)
{
	FILE *fdes = fopen(fnam, "r");

	if (fnam == NULL || fdes == NULL)
		errrrrr(2, fnam);

	read_file(fdes);
	fclose(fdes);
}

/**
 * read_file - reads a file
 * @fdes: pointer to file descriptor
 * Return: void
 */

void read_file(FILE *fdes)
{
	int ln, fm = 0;
	char *bufff = NULL;
	size_t leng = 0;

	for (ln = 1; getline(&bufff, &leng, fdes) != -1; ln++)
	{
		fm = parse_line(bufff, ln, fm);
	}
	free(bufff);
}
