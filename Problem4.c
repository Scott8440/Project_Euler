/*
Largest Palindrome Product
Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <math.h>

int numDigits(long n);
long isPalindrome(long n);
main() {

	long i, j, maxNum, num;
	maxNum = 0;

	for (i = 1; i < 10000; ++i) {
		for (j = 1; j < 10000; j++) {
			num = i*j;
			
			if ((num > maxNum) && (isPalindrome(num) == 1)) {
				maxNum = num;
			}
		}
	}
	printf("%li\n", maxNum);
}

int numDigits(long n) {
	int number;
	number = 1;	
	while (n/10 > 0) {
		n = n/10;
		number++;
	}
	return number;
}

long isPalindrome(long n) {
	
	long reverse, rem,temp;
	reverse = 0;
  	temp=n;
  	while(temp!=0)
  	{
     		rem=temp%10;
     		reverse=reverse*10+rem;
     		temp/=10;
  	}
	if (reverse == n) {
		return 1;
	}
	else {
		return 0;
	}  
	
}
