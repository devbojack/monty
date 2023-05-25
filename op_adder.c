#include "main.h"

/**
 * add - Stack element addition
 * @stack: Stack head
 * @line: Error line
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
	{
		handle_error(ERR_ADD_USG, NULL, line, NULL);
	}

	a = x->n;
	b = x->next->n;
	x->next->n = a + b;
	*stack = x->next;
	free(x);
}
