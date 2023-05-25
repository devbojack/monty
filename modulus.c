#include "main.h"

/**
 * mod - Modulus operator of stack element
 * @stack: Stack header
 * @line: Error line
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
	{
		handle_error(ERR_MOD_USG, NULL, line, NULL);
	}

	a = x->n;

	if (a == 0)
	{
		handle_error(ERR_DIV_ZRO, NULL, line, NULL);
	}

	b = x->next->n;
	x->next->n = b % a;
	*stack = x->next;
	free(x);
}
