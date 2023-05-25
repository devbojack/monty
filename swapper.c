#include "min.h"

/**
 * swap - Swaps top two elements
 * @stack: Stack header
 * @line: Line error
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line)
{
	unsigned int len = 0, x = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_SWAP_USG, NULL, line, NULL);

	if (*stack)
	{
		x = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = x;
	}
}
