#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	echo n
	if n == 0
	{
		echo "is zero";
	}
	else if n > 0
	{
		echo "is positive"
	}
	else
	{
		echo "is negative"
	}
	return (0);
}
