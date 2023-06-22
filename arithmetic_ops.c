#include "monty.h"

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
* sub - Subtracts first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int sub(stack_t **head)
{
	(*head)->next->n -= (*head)->n;
	pop(head, 0);

	return (1);
}

/**
* _div - Divides first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int _div(stack_t **head)
{
	(*head)->next->n /= (*head)->n;
	pop(head, 0);

	return (1);
}

/**
* mul - Multiplies first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int mul(stack_t **head)
{
	(*head)->next->n *= (*head)->n;
	pop(head, 0);

	return (1);
}

/**
* mod - Does a modulus of the first two nodes in doubly list
* @head: Head of doubly linked list
* Return: Integer
*/
int mod(stack_t **head)
{
	(*head)->next->n %= (*head)->n;
	pop(head, 0);

	return (1);
}

