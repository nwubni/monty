#include "monty.h"

/**
* f_add - Adds first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_add(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	add(head);
}

/**
* f_sub - Minus' first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_sub(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	sub(head);
}


/**
* f_div - Divides first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_div(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	_div(head);
}

/**
* f_mul - Multiplies first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_mul(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	mul(head);
}

/**
* f_mod - Takes the modulus of first two nodes in doubly list
* @head: Head of doubly linked list
* @line_number: Line number
* Return: void
*/
void f_mod(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	mod(head);
}

