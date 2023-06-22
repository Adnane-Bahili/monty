#include "monty.h"
/**
 * queue_node - adds a node to a stack_t stack in queue node
 * @stack: stack head
 * @i: node number
 *
 * Return:	new node
 *		NULL when memalloc fails
 */
stack_t *queue_node(stack_t **stack, const int i)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *current = *stack;

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->i = i;

	if (!*stack)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
		return (new);
	}
	while (current)
	{
		if (!current->next)
		{
			new->next = NULL;
			new->prev = current;
			current->next = new;
			break;
		}
		current = current->next;
	}
	return (new);
}
