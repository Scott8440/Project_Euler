/*
Special Pythagorean Triplet
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <math.h>

main() {

	double a, b;
	int c;
	long prod;

	for (a = 0; a <998 ; a++) {
		for (b = 0; b < 998; b++) {
			c = sqrt(a*a + b*b);
			if ((sqrt(a*a + b*b) == c ) && (a+b+ sqrt(a*a + b*b) == 1000)) {
				prod = a*b*(sqrt(a*a + b*b));
				printf("%f %f\n", a, b);
				printf("%li\n", prod);
			}
		}
	}
	
}
