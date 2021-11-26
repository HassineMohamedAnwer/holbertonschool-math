#include "heron.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
t_cell *heron(double p, double x0)
{
	t_cell *new, *h;
	double _error;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
	{
		return (NULL);
	}
	new->elt = x0;
	new->next = NULL;
	h = new;
	_error = ((x0 * x0) - p);
	if (_error <= 0.0000001)
	{
		return (h);
	}
	while (x0 * x0 - p > 0.0000001)
	{
		x0 = 0.5 * (x0 + p / x0);
		new = new->next;
		new->elt = x0;
		new->next = NULL;
		h = new;
		h = h->next;
	}
	return h;
}
