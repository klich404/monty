#include "monty.h"

int value;

/**
 *
 */

int main(int argc, char *argv[])
{
	char *buffer = NULL, *filename = NULL, **lines = NULL, **opcodes = NULL;
	stack_t *head = NULL;
	unsigned int x = 0;
	(void)argc;


	filename = argv[1];
	buffer = read_monty(filename);
	lines = tokenizer(buffer, "\n");
	while (lines[x])
	{
		opcodes = tokenizer(lines[x], " ");
		if (opcodes[1])
			value = atoi(opcodes[1]);
		mont_func(opcodes[0], &head, (x + 1));
		x++;
	}
	free(opcodes);
	free(lines);
	free(buffer);

	return(0);
}
