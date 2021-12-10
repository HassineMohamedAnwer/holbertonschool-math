#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
* simpson - check the code
* @a: first number
* @b: second number
* @steps: steps
* Return: float double
*/

double simpson(double a, double b, int steps)
{
	double r = 0.0, x = (b - a) / steps, h;
	int i;

	for (i = 1; i <= steps - 1; i++)
	{
		h = a + i * x;
		if (i % 2 == 0)
		{
			r += 2 / (1 + h * h);
		}
		else
		{
			r += 4 / (1 + h * h);
		}
	}
r += (1 / (1 + a * a)) + (1 / (1 + b * b));
r = r * (x / 3);

return (r);
}
