#include "monty.h"
/**
 * f_pall - this function prints the stack
 * @head: head of stack
 * @counter: unused
 * Return: returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
