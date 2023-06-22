#include "monty.h"
/**
 * stack_len - counts the number of elements
 * @l: element number
 * Return: elements count
 */
size_t stack_len(const stack_t *l)
{
	int n = 0;

	while (l)
	{
		l = l->next;
		n++;
	}
	return (n);
}
/**
 * swap -  swaps data from top to previous
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int cnt_ln)
{
	stack_t *temp = NULL;
	int temp_i = 0;

	if (stack_len(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	temp = *stack;
	temp_i = temp->i;
	temp->i = temp_i;
	temp->i = temp->next->i;
	temp->next->i = temp_i;
}
