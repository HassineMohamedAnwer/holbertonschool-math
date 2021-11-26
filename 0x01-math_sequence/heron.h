#ifndef HERON_H
#define HERON_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct list_s
{
	double elt;
	struct list_s *next;
} t_cell;
t_cell *heron(double p, double x0);
#endif
