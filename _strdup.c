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
	char *str2;
	int i = 0, x;

	if (str == NULL)
		return (NULL);

	printf("------\n");
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	printf("------\n");
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
		return (NULL);

	for (x = 0; x <= i; x++)
		str2[x] = str[x];

	printf("\n--------\nstr2: %s-------\n", str2);
	return (str2);
}
