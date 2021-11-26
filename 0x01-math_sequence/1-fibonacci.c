#include "fibonacci.h"
/**
 * add_nodeint_end - check the code
 * @head: pointer to head of the list
 * @n: int to add
 * Return: Adress of the new element.
 */
t_cell *add_nodeint_end(t_cell *head, int n)
{
	t_cell *new_h;

	new_h = malloc(sizeof(t_cell));
	if (new_h == NULL)
		return (NULL);
	new_h->elt = n;
	new_h->next = head;
	return (new_h);
}
/**
 * Fibonnaci - fibonacci list
 *
 * Return: list
 */
t_cell *Fibonnaci()
{
	int i;
	t_cell *head;
	int x1 = 1;
	int x2 = 1;
	int x3 = 2;

	head = add_nodeint_end(NULL, 1);
	head = add_nodeint_end(head, 1);
	head = add_nodeint_end(head, 2);
	for (i = 0; i < 17; i++)
	{
		x1 = x2;
		x2 = x3;
		x3 = x1 + x2;
		head = add_nodeint_end(head, x3);
	}
	return (head);
}
/**
 * gold_number - check the code
 * @head: head linked list
 * Return: B / A
 */

double gold_number(t_cell *head)
{
	double A, B;

	B = head->elt;
	head = head->next;
	A = head->elt;
	return (B / A);
}
