#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @ccounter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int ccounter)
{
	stack_t *hh;
	(void)ccounter;

	hh = *head;
	if (hh == NULL)
		return;
	while (hh)
	{
		printf("%d\n", hh->n);
		hh = hh->next;
	}
}
