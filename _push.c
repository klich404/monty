#include "monty.h"

void _push(stack_t **head, unsigned int line)
{
	stack_t *new = NULL;
	(void)line;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);

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
