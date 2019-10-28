#include <iostream>
#include <vector>
#include <Date.H>

int main() {
	Date date1 {};
	date1.year = 1996;
	date1.month = 4;
	date1.day = 25;
	
	prettyprint(date1);
}
