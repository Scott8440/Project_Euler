/*
Quadratic Primes
Problem 27
Euler discovered the remarkable quadratic formula:

n² + n + 41

It turns out that the formula will produce 40 primes for the consecutive values n = 0 to 39. However, when n = 40, 402 + 40 + 41 = 40(40 + 1) + 41 is divisible by 41, and certainly when n = 41, 41² + 41 + 41 is clearly divisible by 41.

The incredible formula  n² − 79n + 1601 was discovered, which produces 80 primes for the consecutive values n = 0 to 79. The product of the coefficients, −79 and 1601, is −126479.

Considering quadratics of the form:

n² + an + b, where |a| < 1000 and |b| < 1000

where |n| is the modulus/absolute value of n
e.g. |11| = 11 and |−4| = 4
Find the product of the coefficients, a and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n = 0.
*/

#include <stdio.h>
#include <math.h>

int isPrime(int num);

main() {
	
	int a, b, n, count, max, bestA, bestB, product;
	count = max = 0;
	
	for(a = -999; a < 1000; a++) {
		for (b = -999; b < 1000; b+=2) {
			n = 0;	
			count = 0;	
			while(isPrime(n*n+a*n+b)==1) {
				count++;			
				n++;
				if (count > max) {
					max = count;
					bestA = a;
					bestB = b;
					product = bestA*bestB;
				}
			}
		}
	}
	printf("A: %d\nB: %d\nCount: %d\nProduct: %d\n", bestA, bestB, max, product);
}

int isPrime(int num) {
	if (num < 2) {
		return 0;
	}
	int i;
	for (i = 2; i < sqrt(num)+1; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}
