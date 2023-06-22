#include "monty.h"

/**
* f_pall - Prints doubly linked list
* @h: Head of doubly linked list
* @line_number: Line number
* Return: int
*/

void f_pall(stack_t **h, unsigned int line_number)
{
	stack_t *curr = *h;

	(void) line_number;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}

/**
* f_pint - Prints head of doubly linked list
* @h: Head of doubly linked list
* @line_number: Line number
* Return: void
*/

void f_pint(stack_t **h, unsigned int line_number)
{
	(void) line_number;

	if (!(*h))
		return;

	printf("%d\n", (*h)->n);
}

