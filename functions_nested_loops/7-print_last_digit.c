/**
 * print_last_digit - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	write(1, n%10, 1);
	return(n%10);
}
