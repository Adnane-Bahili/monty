#include "monty.h"
/**
 * rotr - rotates last node of the stack
 * @stack: stack head
 * @cnt_lne: line count
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int cnt_lne)
{
	stack_t *bott;
	stack_t *prev;

	(void) cnt_lne;
	if (!stack || !*stack || !(*stack)->next)
		return;
	bott = *stack;
	while (bott->next)
		bott = bott->next;
	prev = bott->prev;
	bott->next = *stack;
	bott->prev = NULL;
	prev->next = NULL;
	(*stack)->prev = bott;
	*stack = bott;
}
