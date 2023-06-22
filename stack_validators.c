#include "monty.h"

/**
* can_push - Checks if it's okay to push to stack
* @stack: Stack head
* Return: int
*/
int can_push(stack_t *stack)
{
	(void) stack;

	return (1);
}

/**
* can_pint - Checks if it's okay to print stack top
* @stack: Stack head
* Return: int
*/
int can_pint(stack_t *stack)
{
	if (!stack)
		return (0);

	return (1);
}

/**
* can_pop - Checks if it's okay to pop stack top
* @stack: Stack head
* Return: int
*/
int can_pop(stack_t *stack)
{
	if (!stack)
		return (0);

	return (1);
}


/**
* can_swap - Checks if it's okay to swap two top most stack items
* @stack: Stack head
* Return: int
*/
int can_swap(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	return (1);
}

