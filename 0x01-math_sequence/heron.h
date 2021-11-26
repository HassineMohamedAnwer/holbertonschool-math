#ifndef HERON_H
#define HERON_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - list
 * @elt: double
 * @next: pointer to next in list
*/
typedef struct list_s
{
	double elt;
	struct list_s *next;
} t_cell;
t_cell *heron(double p, double x0);
#endif
