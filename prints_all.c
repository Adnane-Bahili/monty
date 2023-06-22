#include "monty.h"
/**
 * pall - prints stack
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int cnt_ln __attribute__((unused)))
{
	print_stack(*stack);
}
