#include "main.h"

/**
 * mul - Multiplies stack element
 * @stack: Head stack
 * @line: Error line
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_MUL_USG, NULL, line, NULL);

	a = x->n;
	b = x->next->n;
	x->next->n = b * a;
	*stack = x->next;
	free(x);
}
