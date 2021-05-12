#include "monty.h"

void mont_func(char **array, int line, stack_t **head)
{
	instruction_t ops[] = {
		{"push", new_node},
		{"pall", print_nodes},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode)
	{
		if (strcmp(array[0], ops[i].opcode) == 0)
			ops[i].f(head, line);
		i++;
	}
}