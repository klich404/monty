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
	while(opcodes[i])
	{
		printf("%s\n", opcodes[i]);
		i++;
	}

	return(0);
}
