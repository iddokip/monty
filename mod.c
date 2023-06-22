#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: first node of stack
 * @count: number line
 * Return: Null
*/
void f_mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int leng = 0, au;

	h = *head;
	while (h)
	{
		h = h->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = h->next->n % h->n;
	h->next->n = au;
	*head = h->next;
	free(h);
}
