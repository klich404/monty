#include "monty.h"

/**
 * main - the main function
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *buffer = NULL, *filename = NULL, **lines = NULL, **opcodes = NULL;
	char *cmd[] = {"push", "pall"};
	stack_t *head = NULL;
	unsigned int x = 0, j = 0;
	int status = -1;

	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	buffer = read_monty(filename);
	lines = tokenizer(buffer, "\n");
	while (lines[x])
	{
		opcodes = tokenizer(lines[x], " ");
		if (opcodes[1])
			value = atoi(opcodes[1]);
		while (cmd[j])
		{
			if (strcmp(opcodes[0], cmd[j]) == 0)
			{
				mont_func(opcodes[0], &head, (x + 1));
				status = 1;
				break;
			}
			else
				status = -1;
			j++;
		}
		if (status != 1)
		{
			printf("L%d: unknown instruction %s\n", (x + 1), opcodes[0]);
			exit (EXIT_FAILURE);
		}
		x++;
	}
	free(opcodes);
	free(lines);
	free(buffer);
	return (0);
}
