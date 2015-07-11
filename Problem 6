/*
Sum Square Difference
Problem 6

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

main() {

	long sumSquare, squareSum, i, temp;
	temp = 0;
	sumSquare = 0;
	squareSum = 0;
	for (i =1; i <= 100; i++) {
		sumSquare += pow(i,2);
	}
	for (i = 1; i <= 100; i++) {
		temp += i;
		squareSum = pow(temp, 2);
	}
	
	printf("%li\n", squareSum - sumSquare);
}
