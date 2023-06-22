#include "monty.h"

FILE *open_file(const char *filename);
bus_t pdata = {0, 0, 0, NULL};

/**
* main - main function
* @argc: Argument count
* @argv: Argument vector
* Return: int
*/
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	int line_number = 1;
	char **tokens = NULL;
	FILE *file = NULL;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open_file(argv[1]);
	tokens = malloc(sizeof(char *) * 3);

	read = getline(&line, &len, file);

	while (read != -1 && !pdata.exec_error)
	{
		pdata.line_number = line_number;
		tokenize(tokens, line);
		execute(tokens, &stack, line_number);
		line_number++;

		read = getline(&line, &len, file);
	}

	fclose(file);
	free(line);
	free(tokens);
	free_stack(stack);

	if (pdata.exec_error)
		exit(EXIT_FAILURE);

	return (0);
}

