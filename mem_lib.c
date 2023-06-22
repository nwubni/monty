#include "monty.h"

/**
* free_stack - Frees doubly linked list
* @head: Head of linked doubly linked list
* Return: void
*/

void free_stack(stack_t *head)
{
	stack_t *curr, *next;

	curr = head;

	while (curr && curr->prev)
		curr = curr->prev;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
