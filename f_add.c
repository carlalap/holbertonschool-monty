#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * and removes the top element from the stack.
 * @stack: The head of the stack
 * @line_number: The line number of the monty file
 * Return: void
 */


void add(stack_t **stack, unsigned int line_number)
{
	/*stack contains at least two elements NOT NULL*/
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
/*
 * adds the value ofthe 2d elmnt to the value
 * of the top elmnt by accessing the n member of the top
 */
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

