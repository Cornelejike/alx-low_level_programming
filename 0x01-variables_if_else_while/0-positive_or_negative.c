#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: 0 Successful
 */

/* more header goes hear */

/* betty style doc for function main goes here */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	printf("% is positive\n", n);
	else if (n < 0)
	printf("% is negetive\n", n);
	else
	printf("% is zero\n", n);
	return (0);
}
