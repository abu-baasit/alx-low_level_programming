#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program on if_else_while
 * Return: Always 0( success)
 */
int main(void)
{
	int n;
	int dl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dl = n % 10;
	if (dl > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dl);
	} else if ((dl < 6) && (dl != 0))
	{       printf("Last digit of %d is %d and is less than 6 and
			not 0\n", n, dl);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, dl);
	}
	return (0);
}
