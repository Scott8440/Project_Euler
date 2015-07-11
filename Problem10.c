/*
Summation of Primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>

main() {
	long sum, i;
	sum = 0;
	for (i = 2; i <= 2000000; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	printf("%li\n", sum);
}

int isPrime(long n) {
	
	if (n == 2) { return 1; }
	long i;
	for (i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
