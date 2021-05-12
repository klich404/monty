#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
    char *buffer = NULL, *filename = NULL, **opcodes = NULL;
	int i = 0;

    filename = argv[1];
    buffer = read_monty(filename);

	opcodes = tokenizer(buffer, " ");
	mont_func(opcodes, 1, &head);
	free(opcodes);
	free(buffer);
	return(0);
}
