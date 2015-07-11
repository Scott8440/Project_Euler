/*
Highly Divisible Triangular Number
Problem 12

The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

#include <stdio.h>
#include <math.h>

main() {
	int max, i;
	long curr;
	curr = 0;
	i = 0;
	while (max < 501) {
		max = numDiv(curr);
		curr += i;
		i++;
	}
	printf("%li\n", curr);
}

int numDiv(long n) {
		
	int count;
	count = 0;
	long i;
	for (i = 1; i < sqrt(n) +1; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}
