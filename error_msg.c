#include "monty.h"

/**
* show_exec_error - Prints execution error
* @line: Line number
* @index: Error message index
* Return: void
*/

void show_exec_error(unsigned int line, int index)
{
	char *error_msg[] = {"L%d: usage: push integer\n", NULL,
	"L%d: can't pint, stack empty\n", "L%d: can't pop an empty stack\n",
	"L%d: can't swap, stack too short\n", "L%d: can't add, stack too short\n",
	"L%d: can't sub, stack too short\n", "L%d: can't div, stack too short\n",
	"L%d: can't mul, stack too short\n", "L%d: can't mod, stack too short\n",
	NULL};

	if (index >= 0 && index < 11 && error_msg[index] != NULL)
		fprintf(stderr, error_msg[index], line);
}
