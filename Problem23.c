/*
Non-Abundant Sums
Problem 23

A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

#include <stdio.h>

/* READ THE QUESTION AGAIN*/
int isSummable(int num);

int count = 0;

main() {
	int i = 24;
	for(i = 24; i < 28123; i++) {
		printf("%d\n", i);
		if(!isSummable(i)) {
			count += i;
		}
	}
	printf("%d\n", count);
}

int isAbundant(int i) {
	if (sumDivisors(i) > i) {
		return 1;
	}
	else {
		return 0;
	}
}

int sumDivisors(int num) {
	
	int i, sum;
	sum = 0;
	for(i = 1; i < num/2+1; i ++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum;
}

int isSummable(int num) {
	int i, j;
	for(i = 12; i < num; i++ ) {
		if(isAbundant(i)) {
			for(j = 12; j < num; j++) {
				if(i+j > num) {
					break;
				}
				else if (isAbundant(j)) {
					if(i+j == num) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
