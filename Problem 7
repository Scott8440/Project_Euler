/*
10001st Prime
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
#include <math.h>

main() {

	long i, count;
	i = 1;
	count = 0;
	while (count < 10001) {
		i++;
		if (isPrime(i) == 1) {
			count++;
		}
	}
	printf("%li\n", i);


}

int isPrime(long n) {
	
	int i;
	if (n ==2) {
		return 1;
	}
	for (i = 2; i < sqrt(n) +1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
