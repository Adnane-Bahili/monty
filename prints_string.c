#include "monty.h"
/**
 * pstr - prints the stack_t contents as a string
 * @stack: provided by main
 * @cnt_ln: error messages line count
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int cnt_ln __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->i <= 0 || current->i > 127)
			break;
		putchar((char) current->i);
		current = current->next;
	}
	putchar('\n');
}
