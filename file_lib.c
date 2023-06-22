#include "monty.h"

/**
* open_file - Opens a file
* @filename: File name to open
* Return: File descriptor
*/
FILE *open_file(const char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (file);
}

