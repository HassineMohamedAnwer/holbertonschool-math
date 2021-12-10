#include <stdio.h>
#include <math.h>

/**
* rectangle_method - check the code
* @a: first number
* @b: second number
* @steps: steps
* Return: float double
*/

double rectangle_method(double a, double b, int steps)
{

int i = 0;
double x , y = (b - a) / steps, r = 0.0, t = a;

	while (i < steps)
	{
		/* in terms of width */
		x = 1 / (1 + (t * t));
		/* of all areas */
		r += x * y;
		/* change in width */
		t += y;
		i++;
	}

return (r);
}
