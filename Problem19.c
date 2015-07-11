/*

You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?*/

#include <stdio.h>
void isLeapYear(int year);
void incMonth(int month);
void yearLoop(int year);

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/* Sun = 0, Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6 */
int day;
int count = 0;


main() {
	int i;
	day = 2;
	for (i = 1901; i < 2001; i++) {
		isLeapYear(i);
		printf("Feb: %d\n", months[1]);
		yearLoop(i);
		printf("Count: %d\n\n", count);
	}

}

void isLeapYear(int year) {

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		months[1] = 29;
	}
	else {
		months[1] = 28;
	}
}

void incMonth(int i) {
	int month = months[i];
	day = day + months[i] % 7;

	if (day >= 7) {
		day = day -7;
	}	
}

void yearLoop(int year) {
	int i;
	for(i = 0; i < 12; i++) {
	printf("Year: %d\tMonth: %d\tDay: %d\n", year, i, day);		
		if (day == 0) {
			count++;
		}
		incMonth(i);
	}
}
