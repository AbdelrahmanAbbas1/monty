#include "monty.h"

/**
 * get_op_func - Gets the right function for the operation
 * @s: The operation code to be passed
 *
 * Return: A pointer the the right fucntion
 */
void (*get_op_func(char *s))(stack_t **head, unsigned int line_n)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push_func},
		{"pall", pall_func},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
