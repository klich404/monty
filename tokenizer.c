#include "monty.h"

/**
* tokenizer - Splits a string by a determined character.
* @str: String to split.
* @sep: Character used to split.
* Return: An array that contains each word splitted.
*/

char **tokenizer(char *str, char *sep)
{
	char *token_cp = NULL, *str_dup = NULL, *token = NULL;
	char **array_input = NULL;
	int i = 0, x = 0;

	str_dup = _strdup(str);
	token_cp = strtok(str_dup, sep);
	while (token_cp)
	{
		token_cp = strtok(NULL, sep);
		x++;
	}
	array_input = malloc(sizeof(char *) * (x + 1));
	if (!array_input)
	{
		printf("Error: malloc failed");
		free(str_dup);
		free(array_input);
		exit(EXIT_FAILURE);
	}
	token = strtok(str, sep);
	while (token != NULL)
	{
		array_input[i] = token;
		token = strtok(NULL, sep);
		i++;
	}
	array_input[i] = NULL;
	free(str_dup);
	return (array_input);
}
