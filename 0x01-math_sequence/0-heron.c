#include "heron.h"
/**
 * add_nodeint_end - check the code
 * @head: pointer to head of the list
 * @n: int to add
 * Return: Adress of the new element.
 */
t_cell *add_nodeint_end(t_cell *head, double n)
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
 * _pow - calculate power.
 * @x: int
 * @y: int (power)
 * Return: x pow y
 *
 */
unsigned int _pow(int x, int y)
{
	unsigned int res = x;
	int i;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	if (x == 0)
		return (0);
	if (y < 0)
	{
		y = y * -1;
		res = 1 / x;
		for (i = 1; i < y; i++)
			res = res * (1 / x);
	}
	else
	{
		for (i = 1; i < y; i++)
			res = res * x;
	}
	return (res);
}
/**
 * _abs - check the code
 * @n: int to modify
 * Return: Abs of n.
 */
double _abs(double n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
/**
 * heron - check the code
 * @p: number to check the square of
 * @x0: u0
 * Return: list.
 */
t_cell *heron(double p, double x0)
{
	t_cell *head;
	double x;

	head = malloc(sizeof(t_cell));
	if (head == NULL)
	{
		return (NULL);
	}
	head = add_nodeint_end(NULL, x0);
	x = 0.5 * (x0 + (p / x0));
	while (_abs(x - x0) > 0.0000001)
	{
		head = add_nodeint_end(head, x);
		x0 = x;
		x = 0.5 * (x + p / x);
	}
	return (head);
}
