/* Problem Statement:
 * ------------------
 * If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of
 * these multiples is 23. Find the sum of all the multiples
 * of 3 or 5 below 1000.
 */

// Solution:
// ---------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i < 1000; ++i)
		if (!(i % 3) || !(i % 5))
			sum += i;

	printf("Sum of multiples of 3 or 5 ( < 1000): %d\n", sum);

	return 0;
}
