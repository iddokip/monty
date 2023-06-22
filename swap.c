#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @ccounter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int ccounter)
{
	stack_t *hh;
	int llen = 0, aaux;

	hh = *head;
	while (hh)
	{
		hh = hh->next;
		llen++;
	}
	if (llen < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", ccounter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aaux = hh->n;
	hh->n = hh->next->n;
	hh->next->n = aaux;
}
