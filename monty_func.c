#include "monty.h"

/**
 * mont_func - search the function in a struct
 * @array: the code linea
 * @head: the head of the linked list
 * @line: the line counter
 */

void mont_func(char *array, stack_t **head, unsigned int line)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{NULL, NULL}
	};
	while (ops[i].opcode)
	{
		if (strcmp(array, ops[i].opcode) == 0)
			ops[i].f(head, line);
		i++;
	}
	if (ops == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, array);
		exit(EXIT_FAILURE);
	}
}
