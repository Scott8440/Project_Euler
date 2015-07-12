/*
Circular Primes
Problem 37

The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?
*/

#include <stdio.h>
#include <math.h>

main() {
	
	int i;
	int count = 0;
	for (i = 1; i < 1000000; i++) {
		if (checkPrimes(i)) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("Count: %d\n", count);

}

int isPrime(int num) {

	int i;
	for (i = 2; i< sqrt(num) +1; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int numDigits(int num) {
	int digits = 0;
	while (num > 0) {
		num = num/10;
		digits++;
	}
	return digits;
}

int rotate(int num) {
	int last;
	last = num%10;
	num = num/10;
	num += last*pow(10, numDigits(num));

	return num;
}

int checkPrimes(int num) {
	int i;
	if (!isPrime(num)) {
		return 0;
	}
	for (i = 1; i < numDigits(num); i++) {
		num = rotate(num);
		if(!isPrime(num)) {
			return 0;
		}
	}
	return 1;
}
