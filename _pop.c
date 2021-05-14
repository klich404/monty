#include "monty.h"

/**
 * _pop - pop a node
 * @head: the head of the linked list
 * @line: the line counter
 */

void _pop(stack_t **head, unsigned int line)
{
	stack_t *savepoint;

	if (*head != NULL)
	{
		savepoint = (*head)->next;
		free(*head);
		*head = savepoint;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
}
