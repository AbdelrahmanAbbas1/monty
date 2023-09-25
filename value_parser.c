#include "monty.h"

/**
 * value_parser - Parse the value in the line code
 * @line: The line code to be passed
 *
 * Return: The value in the line code
 */
unsigned int value_parser(char *line)
{
	char *n_string;
	unsigned int value;
	int i = 0;
	int k = 0;

	while (line[i] != '\0')
	{
		if (line[i] >= '0' && line[i] <= '9')
			k++;
		i++;
	}
	n_string = malloc(sizeof(char) * (k + 1));

	i = 0;
	k = 0;
	while (line[i] != '\0')
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			n_string[k] = line[i];
			k++;
		}
		i++;
	}
	n_string[k] = '\0';
	value = atoi(n_string);
	free(n_string);
	return (value);
}
