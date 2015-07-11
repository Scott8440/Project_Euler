/*
Largest Prime Factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

main() {

	long long num, i;
	scanf("%lli\n", &num);

	for (i = 2; i < num/2; ++i) {
		if (num % i == 0) {
			num = num/i;			
			printf("%lli\t%lli\n", i, num);
		}
	}

}
