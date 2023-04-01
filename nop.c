#include "monty.h"

/**
 * nop - The opcode nop doesn’t do anything.
 * @stack: unused parameter
 * @line_number: unused parameter
 *
 * Return: void
 *
 *  * Description: The `nop` opcode does nothing. It is used as a placeholder
 * or a no-op instruction. In this implementation, `nop` takes two parameters,
 * but they are unused. To avoid compiler warnings, we cast them to `(void)`.
 */

void nop(stack_t **stack, unsigned int line_number)
{
	/* Suppress unused parameter warnings */
	(void)stack;
	(void)line_number;
}

