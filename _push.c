#include "monty.h"

/**
 * _push - push a node
 * @head: the head of the linked list
 * @line: the line counter
 */

void _push(stack_t **head, unsigned int line)
{
	stack_t *new = NULL;
	(void)line;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
	}

	new->n = value;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while ((*head)->prev != NULL)
		{
			(*head) = (*head)->prev;
		}
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
}
