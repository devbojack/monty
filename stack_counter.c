#include "main.h"

/**
 * count_stack - Stack counter
 * @stack: Stack header
 *
 * Return: Stack number
 */
unsigned int count_stack(stack_t *stack)
{
	stack_t *x = stack;
	unsigned int len = 0;

	while (x != NULL)
	{
		++len;
		x = x->next;
	}

	return (len);
}
