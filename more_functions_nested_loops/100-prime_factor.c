#include <stdio.h>
#include <math.h>

int print_largest_prime(int n)
{
	int temp = n;

	int p;

	for (n = 2; n <= sqrt(temp); n++)
	{
		if ((temp % n) == 0)
			p = n;
	}
	printf("%d", p);
	return (0);
}
