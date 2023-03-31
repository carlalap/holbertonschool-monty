#include "monty.h"
#include <unistd.h>

/**
 * pint - Prints the value at the top of the stack
 * @stack: The stack
 * @line_number: The line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL) /* Check if stack is empty */
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n); /* Print top value and new line */
}
