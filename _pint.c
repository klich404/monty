#include "monty.h"

/**
 * _pint - print the top node
 * @head: the head of the linked list
 * @line: the line counter
 */

void _pint(stack_t **head, unsigned int line)
{
	if (*head != NULL)
		printf("%d\n", (*head)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
}
