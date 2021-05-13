#include "monty.h"

void _pall(stack_t **head, unsigned int line)
{
	size_t x = 0;
	stack_t *temp = NULL;
	int check = 0;
	(void)line;

	temp = *head;
	for (x = 0; temp != NULL; x++)
	{
		if (temp->prev != NULL && check == 0)
		{
			temp = temp->prev;
			continue;
		}
		else if (temp->prev == NULL)
		{
			check = 1;
			x = 0;
		}
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}