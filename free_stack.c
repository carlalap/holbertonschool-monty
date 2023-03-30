#include "monty.h"
/**
 * free_stack_t - frees a stack_t list.
 * @stack: a pointer to the head
 *
 * Return: void
 */

void free_stack_t(stack_t *stack)
{
	stack_t *ptr = stack;

	if (stack == NULL)
	{
		return;
	}

	while (ptr->next)
	{
		stack = stack->next;
		free(ptr);
		ptr = stack;
	}
	free(ptr);
}
