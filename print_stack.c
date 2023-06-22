#include "monty.h"
/**
 * print_stack - prints a stack_t contents
 * @stack: stack head
 *
 * Return: list elements count
 */
size_t print_stack(const stack_t *stack)
{
	size_t c = 0;

	while (stack)
	{
		printf("%d\n", stack->i);
		stack = stack->next;
		c++;
	}
	return (c);
}
