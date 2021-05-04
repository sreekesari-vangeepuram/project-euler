/* Problem Statement:
 * ------------------
 * Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1
 * and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence
 * whose values do not exceed four million, find the sum
 * of the even-valued terms.
 */

// Solution:
// ---------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int
	t1 = 1, t2 = 2,
	i = 1, acc = 0;

	while (t1 < 4000000)
	{
		if (!(t1 % 2)) acc += t1;
		printf("fib[%d] = %d\n", i++, t1);
		t2 = t1 + t2;
		t1 = t2 - t1;
	}

	printf("Sum of even values terms in fib-seq ( < 4,000,000): %d\n", acc);

	return 0;
}
