/*
Square Digit Chains
Problem 92
A number chain is created by continuously adding the square of the digits in a number to form a new number until it has been seen before.

For example,

44 → 32 → 13 → 10 → 1 → 1
85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89

Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop. What is most amazing is that EVERY starting number will eventually arrive at 1 or 89.

How many starting numbers below ten million will arrive at 89?
*/

#include <stdio.h>

main() {

	int n, m, i, count;
	count = 0;
	
	for (i = 7; i < 8; i++) {
		n = i;
		while (!(n == 1 || n == 89)) {
			m = sumDigits(n);
			n = m;
			printf("%d\n", n);
		}
		if (n == 89) { 
			count++;
			printf("%d\n", i); 
		}
	}
	
	printf("%d\n", count);

}

int sumDigits(int t) {
	
	int remainder, sum;
	sum = 0;
	while (t != 0) {
	
		remainder = t%10;
		sum += remainder*remainder;
		t = t/10;
	}
	
	return sum;
}
