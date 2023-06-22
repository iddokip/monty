#include "monty.h"
/**
 * f_div - divides the first 2 numbers 
 * @head: head to stack
 * @count: number line
 * Return: null
*/
void f_div(stack_t **head, unsigned int count)
{
	stack_t *hh;
	int leng = 0, ux;

	hh = *head;
	while (hh)
	{
		hh = hh->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	if (hh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ux = hh->next->n / hh->n;
	hh->next->n = ux;
	*head = hh->next;
	free(hh);
}
