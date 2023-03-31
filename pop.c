#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if ((*stack) == NULL) /*check if the pointer of topstack is empty*/
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack; /* store the top of stack in tmp  */
	*stack = (*stack)->next; /*update the topstack to next elem*/
	free(tmp);
}
