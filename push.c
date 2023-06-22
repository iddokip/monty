#include "monty.h"
/**
 * f_push - adds a node to the stack
 * @head: stack head
 * @count: number line
 * Return: Null
*/
void f_push(stack_t **head, unsigned int count)
{
	int nn, jj = 0, fflag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jj++;
		for (; bus.arg[jj] != '\0'; jj++)
		{
			if (bus.arg[jj] > 57 || bus.arg[jj] < 48)
				fflag = 1; }
		if (fflag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, nn);
	else
		addqueue(head, nn);
}
