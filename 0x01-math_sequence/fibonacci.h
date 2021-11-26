#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * struct list_s - list
 * @elt: double
 * @next: pointer to next in list
*/
typedef struct list_s
{
	int elt;
	struct list_s *next;
} t_cell;
t_cell *Fibonnaci();
double gold_number(t_cell *head);
#endif
