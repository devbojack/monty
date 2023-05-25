#include "main.h"

/**
 * pint - Value printer
 * @stack: Head stack
 * @line_number: Line error
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
    {
        handle_error(ERR_PINT_USG, NULL, line, NULL);
    }

	printf("%d\n", (*stack)->n);
}
