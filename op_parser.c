#include "monty.h"

/**
 * op_parser - Parse the operation code into string
 * @line: The code to be passed
 *
 * Return: The operation string
 */
char *op_parser(char *line)
{
	char *operation;
	int i = 0;
	int k = 0;

	while (line[i] != '\0')
	{
		if (line[i] >= 97 && line[i] <= 122)
			k++;
		i++;
	}
	operation = malloc(sizeof(char) * (k + 1));
	i = 0;
	k = 0;
	while (line[i] != '\0')
	{
		if (line[i] >= 97 && line[i] <= 122)
		{
			operation[k] = line[i];
			k++;
		}
		i++;
	}
	operation[k] = '\0';
	return (operation);
}
