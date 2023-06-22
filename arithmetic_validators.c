#include "monty.h"

/**
* can_add - Checks if it's okay to add two top most stack items
* @stack: Stack head
* Return: int
*/
int can_add(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	return (1);
}

/**
* can_sub - Checks if it's okay to subtract two top most stack items
* @stack: Stack head
* Return: int
*/
int can_sub(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	return (1);
}

/**
* can_div - Checks if it's okay to divide two top most stack items
* @stack: Stack head
* Return: int
*/
int can_div(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	if (stack->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", pdata.line_number);
		pdata.exec_error = 1;
	}

	return (1);
}

/**
* can_mul - Checks if it's okay to multiply two top most stack items
* @stack: Stack head
* Return: int
*/
int can_mul(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	return (1);
}

/**
* can_mod - Checks if it's okay to do modulus of two top most stack items
* @stack: Stack head
* Return: int
*/
int can_mod(stack_t *stack)
{
	if (!stack || !stack->next)
		return (0);

	if (stack->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", pdata.line_number);
		pdata.exec_error = 1;
	}

	return (1);
}

