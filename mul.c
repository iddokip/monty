#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @ccounter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int ccounter)
{
	stack_t *hh;
	int llen = 0, aaux;

	hh = *head;
	while (hh)
	{
		hh = hh->next;
		len++;
	}
	if (llen < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", ccounter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aaux = hh->next->n * hh->n;
	hh->next->n = aaux;
	*head = hh->next;
	free(hh);
}
