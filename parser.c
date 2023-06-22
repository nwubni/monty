#include "monty.h"

/**
* tokenize - Splits str and puts them in tokens
* @tokens: Array to hold tokens
* @str: String to split
* Return: void
*/
void tokenize(char **tokens, char *str)
{
	char *token = NULL;
	char *delim = " \n\t\r";
	unsigned int index = 0;

	token = strtok(str, delim);

	while (token && index < 2)
	{
		tokens[index] = token;

		if (!tokens[index])
			break;

		index++;
		token = strtok(NULL, delim);
	}

	tokens[index] = NULL;
}

