#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
* struct validate_s - function validator
* @f: function to handle the validation
*
* Description: function to check if an operation
* will be okay to execute
*/
typedef struct validate_s
{
	int (*f)(stack_t *stack);
} validate;


/**
* struct bus_s - function validator
* @exec_error: Indicates execution failure
* @stack_value: Holds a stack value after command
*
* Description: struct to allow data transfers
*/
typedef struct bus_s
{
	int line_number;
	int exec_error;
	int num_tokens;
	char *stack_value;
} bus_t;

void f_pall(stack_t **stack, unsigned int line_number);
void f_pint(stack_t **h, unsigned int line_number);

void f_push(stack_t **stack, unsigned int line_number);
int push(stack_t **stack, const int n);

void f_pop(stack_t **stack, unsigned int line_number);
int pop(stack_t **stack, int index);

void f_swap(stack_t **stack, unsigned int line_number);
int swap(stack_t **stack);

void f_add(stack_t **stack, unsigned int line_number);
int add(stack_t **stack);

void f_sub(stack_t **stack, unsigned int line_number);
int sub(stack_t **stack);

void f_div(stack_t **stack, unsigned int line_number);
int _div(stack_t **stack);

void f_mul(stack_t **stack, unsigned int line_number);
int mul(stack_t **stack);

void f_mod(stack_t **stack, unsigned int line_number);
int mod(stack_t **stack);

void free_stack(stack_t *stack);

int can_push(stack_t *stack);
int can_pint(stack_t *stack);
int can_pop(stack_t *stack);
int can_swap(stack_t *stack);
int can_add(stack_t *stack);
int can_sub(stack_t *stack);
int can_div(stack_t *stack);
int can_mul(stack_t *stack);
int can_mod(stack_t *stack);

void tokenize(char **tokens, char *str);
void execute(char **cmd, stack_t **stack, int line_number);

void show_exec_error(unsigned int line, int index);

int is_numeric(const char *str);

extern bus_t pdata;

#endif

