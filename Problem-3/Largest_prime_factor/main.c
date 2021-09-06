/* Problem Statement:
 * ------------------
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int main(void)
{
	const long long N = 600851475143;
	for (long long i = N; i > 0; --i)
	{
		if (N % i == 0)
			printf("\033[32m%lld\033[0m\n", i);
	}
	return 0;
}
