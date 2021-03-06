#include "monty.h"

/**
* _strdup - function that returns a pointer to a newly.
* allocated space in memory, which contains a copy of the
* string given as a parameter.
* @str: input string.
* Return: pointer to a newly allocated space in memory.
*/

char *_strdup(char *str)
{
	char *str2 = NULL;
	int i = 0, x = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(str2);
		exit(EXIT_FAILURE);
	}

	for (x = 0; x <= i; x++)
		str2[x] = str[x];

	return (str2);
}
