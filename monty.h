#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * struct stack_s - equivalent doubly linked list of a stack, or queue
 * @i: integer
 * @prev: previous element pointer
 * @next: next element pointer
 *
 * Description: node structure of doubly linked list
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: opcode
 * @f: function that handles the opcode
 *
 * Description: functions and opcode
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#define INSTRUCTIONS { \
	{"push", push},\
	{"pall", pall},\
	{"pint", pint},\
	{"pop", pop},\
	{"swap", swap},\
	{"nop", nop},\
	{"div", _div},\
	{"mul", _mul},\
	{"add", _add},\
	{"sub", _sub},\
	{"mod", mod},\
	{"pchar", pchar},\
	{"pstr", pstr},\
	{"rotl", rotl},\
	{"rotr", rotr},\
	{NULL, NULL} \
}
/**
 * struct help - argument for the current opcode
 * @data_struct: stack mode, stack (default) and queue
 * @argument: the arguments of the string
 *
 * Description: global structure that passes the data around the functions easily
 */
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

extern int status;

void push(stack_t **stack, unsigned int cnt_ln);
void pall(stack_t **stack, unsigned int cnt_ln);
void pint(stack_t **stack, unsigned int cnt_ln);
void swap(stack_t **stack, unsigned int cnt_ln);
void pop(stack_t **stack, unsigned int cnt_ln);
void nop(stack_t **stack, unsigned int cnt_ln);
void _div(stack_t **stack, unsigned int cnt_ln);
void _add(stack_t **stack, unsigned int cnt_ln);
void _sub(stack_t **stack, unsigned int cnt_ln);
void _mul(stack_t **stack, unsigned int cnt_ln);
void mod(stack_t **stack, unsigned int cnt_ln);
void pchar(stack_t **stack, unsigned int cnt_ln);
void pstr(stack_t **stack, unsigned int cnt_ln);
void rotl(stack_t **stack, unsigned int cnt_lne);
void rotr(stack_t **stack, unsigned int cnt_lne);
void opcode(stack_t **stack, char *str, unsigned int cnt_ln);

int is_digit(char *str);
int isnumber(char *str);
int isascii(int c);
int getline(char **lineptr, size_t *n, FILE *stream);

stack_t *add_node(stack_t **stack, const int n);
stack_t *queue_node(stack_t **stack, const int n);
void free_stack(stack_t *stack);
size_t print_stack(const stack_t *stack);


#endif /* MONTY_H */
