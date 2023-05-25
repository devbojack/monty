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

/**
 * sub - Subtracts sack element
 * @stack: Stack header
 * @line: Line error
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
	{
		handle_error(ERR_SUB_USG, NULL, line, NULL);
	}

	a = x->n;
	b = x->next->n;
	x->next->n = b - a;
	*stack = x->next;
	free(x);
}

/**
 * divide - Stack element divider
 * @stack: Stack header
 * @line: Line error
 *
 * Return: void
 */
void divide(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
	{
		handle_error(ERR_DIV_USG, NULL, line, NULL);
	}

	a = x->n;

	if (a == 0)
	{
		handle_error(ERR_DIV_ZRO, NULL, line, NULL);
	}

	b = x->next->n;
	x->next->n = b / a;
	*stack = x->next;
	free(x);
}
