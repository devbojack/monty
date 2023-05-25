#include "main.h"

/**
  * pstr - String printer
  * @stack: Head stack
  * @line: Line error
  *
  * Return: void
  */
void pstr(stack_t **stack, unsigned int line)
{
	stack_t *x = *stack;
	(void) line;

	while (x != NULL)
	{
		if (x->n == 0 || x->n < 0 || x->n > 127)
		{
			break;
		}

		printf("%c", x->n);
		x = x->next;
	}

	printf("\n");
}
