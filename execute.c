#include "monty.h"

/**
* can_execute - Checks if a function should execute
* @stack: Stack head
* @index: Function's index
* @line_number: Line number
* Return: int
*/

int can_execute(stack_t **stack, int index, int line_number)
{
	validate validator[] = {
		{can_push}, {NULL}, {can_pint}, {can_pop},
		{can_swap}, {can_add}, {can_sub}, {can_div},
		{can_mul}, {can_mod}
	};

	if (validator[index].f && !validator[index].f(*stack))
	{
		show_exec_error(line_number, index);
		pdata.exec_error = 1;
		return (0);
	}

	return (1);
}

/**
* execute - Finds and executes a command
* @cmd: Command and argument array
* @stack: Stack
* @line_number: Line number
* Return: void
*/

void execute(char **cmd, stack_t **stack, int line_number)
{
	instruction_t instructions[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop}, {"swap", f_swap}, {"add", f_add},
		{"sub", f_sub}, {"div", f_div}, {"mul", f_mul},
		{"mod", f_mod}, {"nop", NULL}, {NULL, NULL}
	};

	int j;

	pdata.stack_value = cmd && pdata.num_tokens == 2 ? cmd[1] : NULL;

	if (!cmd || !cmd[0] || cmd[0][0] == '#')
		return;

	for (j = 0; instructions[j].opcode; j++)
	{
		if (strcmp(instructions[j].opcode, cmd[0]) == 0)
		{
			if (!instructions[j].f)
				return;

			if (!can_execute(stack, j, line_number))
				return;

			if (!pdata.exec_error)
				instructions[j].f(stack, line_number);

			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, cmd[0]);
	pdata.exec_error = 1;
}

