#include "main.h"

/**
 * pop - Pop stack element
 * @stack: Stack header
 * @line: Line error
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *current = *stack, *x = NULL;

	if (*stack == NULL)
	{
		handle_error(ERR_POP_USG, NULL, line, NULL);
	}

	x = current;

	if (current->next)
	{
		current = current->next;
		current->prev = x->prev;
		*stack = current;
	}
	else
	{
		*stack = NULL;
	}

	free(x);
}
