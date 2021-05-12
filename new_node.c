#include "monty.h"

void new_node(stack_t **head, __attribute__((unused))int line)
{
	stack_t *new;

	if (head == NULL)
		exit(EXIT_FAILURE);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);

	//new->n = n;

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