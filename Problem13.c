/*
Large Sum
Problem 13:

Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
...
...
...
*/

#include <stdio.h>

main() {

	long long sum;
	long num;
	sum = num = 0;

	FILE *file;
	file = fopen("prob13t.txt", "r");
	int i;
	for (i = 0; i <100; i++) {
	
		fscanf(file, "%li", &num);
		sum += num;
	}
	
	printf("%lli\n", sum/10000000000);
}
