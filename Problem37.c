#include <stdio.h>
#include <math.h>

int isPrime(long n);
long truncateLeft(long n);
long truncateRight(long n);
int numDigits(long n);
int isTruncRight(long n);
int isTruncLeft(long n);

main() {
	
	long numSuccess, i, sum;
	numSuccess = sum = 0;
	i = 11;
	
	while (numSuccess < 11) {
		if ((isTruncRight(i) == 1) && (isTruncLeft(i) == 1)) {
			printf("%li\n", i);
			sum += i;
			numSuccess++;
			i += 2;
		}
		else {
			i+= 2;
		}
	}
	printf("Sum: %li\n", sum);
}

long truncateLeft(long n) {

	long dig, tens;

	tens = pow(10, numDigits(n) - 1);
	dig = numDigits(n);
	
	n = n % tens;
	
	return n;

}

long truncateRight(long n) {
	
	n = n /10;
	
	return n;
}

int numDigits(long n) {

	if (n < 10) {
		return 1;
	}
	if (n < 100) {
		return 2;
	}
	if (n < 1000) {
		return 3;
	}
	if (n < 10000) {
		return 4;
	}
	if (n < 100000) {
		return 5;
	}
	if (n < 1000000) {
		return 6;
	}
	if (n < 10000000) {
		return 7;
	}
	if (n < 100000000) {
		return 8;
	}
	if (n < 1000000000) {
		return 9;
	}
	if (n < 10000000000) {
		return 10;
	}
}

int isPrime(long n) {
	
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	int i;
	for (i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int isTruncRight(long n) {
	
	while (n > 0) {
		if (isPrime(n) == 1) {
			n = truncateRight(n);
		}
		else {
			return 0;
		}
	}
	return 1;
}

int isTruncLeft(long n) {

	while (n > 0) {
		if (isPrime(n) == 1) {
			n = truncateLeft(n);
		}
		else {
			return 0;
		}
	}
	return 1;
}
