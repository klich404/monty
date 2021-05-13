#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	char *buffer = NULL, *filename = NULL, **opcodes = NULL;
	stack_t *head = NULL;
	(void)argc;


	filename = argv[1];
	buffer = read_monty(filename);
	opcodes = tokenizer(buffer, " ");
	mont_func("push", &head, 1);

	free(opcodes);
	free(buffer);
	return(0);
}
