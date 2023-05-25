#include "main.h"

/**
 * pchar - Char printer
 * @stack: Stack header
 * @line: Line error
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
	{
		handle_error(ERR_PCH_EMP, NULL, line, NULL);
	}

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
	{
		printf("%c\n", (*stack)->n);
	}
	else
	{
		handle_error(ERR_PCH_USG, NULL, line, NULL);
	}
}
