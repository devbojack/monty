#include "main.h"

/**
 * pall - Stack value printer
 * @stack: Head stack
 * @line: Error line
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *current = NULL;
	(void) line;

	if (*stack)
	{
		current = *stack;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
