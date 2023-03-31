#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	*stack = temp->next; /* set the new top of the stack */
	temp->next = (*stack)->next; /* set the new next node for temp */
	(*stack)->next = temp; /* set the new next node for the stack top */
	(*stack)->prev = NULL; /* set the new prev node for the stack top */
	temp->prev = *stack; /* set the new prev node for temp */
}
