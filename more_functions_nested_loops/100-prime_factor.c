#include <stdio.h>
#include <math.h>

int main(void)
{
	long int n = 612852475143;

	long int temp = n;

	long int p;

	for (n = 2; n <= sqrt(temp); n++)
	{
		if ((temp % n) == 0)
			p = n;
	}
	printf("%ld", p);
	return (0);
}
