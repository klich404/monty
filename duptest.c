#include <stdio.h>
#include <string.h>
char *duplicated(char *string);

int main(void)
{
	char *str = "Hola mundo, este es un test de la funcion strdup";
	printf("Original String in main: %s\n", str);
	char *new_str = duplicated(str);
	printf("Original String after duplicated() in main: %s\n", str);
	printf("new_str: %s\n", new_str);
	return (0);
}

char *duplicated(char *string)
{
	printf("Original String in duplicated(): %s\n", string);
	char *dup;
	dup = strdup(string);
	printf("Original String after strdup: %s\n", string);
	return (dup);
}