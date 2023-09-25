#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Interpreter for Monty ByteCodes files
 * @ac: Argument count
 * @av: Argument Vector
 *
 * Return: 0 ON Succss
 */
int main(int ac, char **av)
{
	char line[60];
	char *line_operation;
	size_t line_size = 60;
	FILE *file;
	unsigned int line_counter = 0;
	unsigned int value;
	stack_t *head;

	head = NULL;

	if (ac != 2)
	{
		printf("USAGE: monty %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");

	while (fgets(line, line_size, file) != NULL)
	{
		line_operation = op_parser(line);
		value = value_parser(line);
		get_op_func(line_operation)(&head, value);
		line_counter++;
		free(line_operation);
	}
	fclose(file);
	return (0);
}
