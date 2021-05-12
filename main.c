#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
    char *buffer = NULL, *filename = NULL, **opcodes = NULL;
	int i = 0, len_buf;

    filename = argv[1];
    buffer = read_monty(filename);

	opcodes = tokenizer(buffer, " ");
	while(opcodes[i] != NULL)
	{
		printf("%s\n", opcodes[i]);
		i++;
	}
	return(0);
}
