#include "monty.h"
/**
 * rotl - rotates first element of the stack
 * @stack: stack head
 * @cnt_lne: line count
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int cnt_lne)
{
	stack_t *left;
	stack_t *right;

	(void) cnt_lne;
	if (!stack || !*stack || !(*stack)->next)
		return;
	left = right = *stack;
	while (right->next)
		right = right->next;
	right->next = left;
	left->prev = right;
	*stack = left->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
