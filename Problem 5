/*
Smallest Multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

main() {
	long num, i, truth;
	num = 20;

	while(num > 0) {
		truth = 1;
		num++;
		for(i = 2; i <= 20; i++) {
			if(num % i != 0) {
				truth = 0;
				break;
			}
		}
		if (truth == 1) {
			printf("%li\n", num);
			break;
		}
	}
}
