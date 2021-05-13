#include "monty.h"

void mont_func(char *array, stack_t **head, unsigned int line)
{
	instruction_t ops[] = {
		{"push", new_node},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].opcode)
	{
		if (strcmp(array, ops[i].opcode) == 0)
			ops[i].f(head, line);
		i++;
	}
}