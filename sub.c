#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int diff, nodes;

	p = *head;
	for (nodes = 0; p != NULL; nodes++)
		p = p->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	diff = p->next->n - p->n;
	p->next->n = diff;
	*head = p->next;
	free(p);
}
