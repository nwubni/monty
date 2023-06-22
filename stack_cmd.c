#include "monty.h"

/**
* f_push - Adds a node to head of doubly linked list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/

void f_push(stack_t **head, unsigned int line_number)
{
	int n;

	(void) line_number;

	if (!pdata.stack_value)
	{
		pdata.exec_error = 1;
		return;
	}

	if (!is_numeric(pdata.stack_value))
	{
		pdata.exec_error = 1;
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
	}

	n = atoi(pdata.stack_value);

	if (push(head, n) == 0)
	{
		pdata.exec_error = 1;
		fprintf(stderr, "Error: malloc failed\n");
	}
}


/**
* f_pop - Deletes a node at index in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_pop(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	pop(head, 0);
}

/**
* f_swap - Swaps first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_swap(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	swap(head);
}

