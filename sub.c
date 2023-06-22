#include "monty.h"
/**
  *f_sub- subtration
  *@head: head of a stack
  *@count: number line
  *Return: Null
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *au;
	int sub, nodes;

	au = *head;
	for (nodes = 0; au != NULL; nodes++)
		au = au->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = *head;
	sub = au->next->n - au->n;
	au->next->n = sub;
	*head = au->next;
	free(au);
}
