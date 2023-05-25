#include "main.h"

/**
 * frees_stack -Frees stack
 *
 * Return: voiud
 */
void frees_stack(void)
{
	stack_t *x = NULL;

	if (head)
	{
		x = head;

		while (x)
		{
			head = head->next;
			free(x);
			x = head;
		}
	}
}
