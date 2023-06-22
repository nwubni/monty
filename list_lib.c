#include "monty.h"


/**
* push - Adds a node to head of doubly linked list
* @head: Head of doubly linked list
* @n: New node to add
* Return: Integer
*/

int push(stack_t **head, const int n)
{
	stack_t *new_node, *curr;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (1);
	}

	curr = *head;

	while (curr && curr->prev)
		curr = curr->prev;

	new_node->next = curr;
	curr->prev = new_node;

	*head = new_node;

	return (1);
}


/**
* pop - Deletes a node at index in doubly list
* @head: Head of doubly linked list
* @index: Index to delete node
* Return: Integer
*/
int pop(stack_t **head, int index)
{
	int pos = 1;
	stack_t *next, *curr = *head;

	while (curr && curr->prev)
		curr = curr->prev;

	if (index == 0 && curr)
	{
		next = *head;
		*head = curr->next;

		if (*head)
			(*head)->prev = NULL;

		free(next);

		return (1);
	}

	while (curr && pos < index)
	{
		curr = curr->next;
		pos++;
	}

	if (curr && pos == index)
	{
		next = curr->next;
		curr->next = (next) ? next->next : NULL;

		if (next && next->next)
			next->next->prev = curr;

		free(next);

		return (1);
	}

	return (-1);
}

/**
* swap - Swaps first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int swap(stack_t **head)
{
	int t = (*head)->n;

	(*head)->n = (*head)->next->n;
	(*head)->next->n = t;

	return (1);
}

/**
* add - Adds first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int add(stack_t **head)
{
	(*head)->next->n += (*head)->n;
	pop(head, 0);

	return (1);
}

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

