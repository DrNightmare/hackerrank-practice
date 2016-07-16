#include "iostream"
#include "stdio.h"
#include "iomanip"

using namespace std;

int main()
{
	int hour, minute, second;
	int convertedHour, convertedMinute, convertedSecond;
	char phase;

	scanf("%d:%d:%d%cM", &hour, &minute, &second, &phase);

	if (phase == 'A') {
		//AM, no need to change anything
		if (hour == 12) {
			cout << setfill('0') << setw(2) << '0';
			cout << ':';
			cout << setfill('0') << setw(2) << minute;
			cout << ':';
			cout << setfill('0') << setw(2) << second;
		}
		else {
			cout << setfill('0') << setw(2) << hour;
			cout << ':';
			cout << setfill('0') << setw(2) << minute;
			cout << ':';
			cout << setfill('0') << setw(2) << second;
		}
	}
	else {
		//PM, convert to 24 hour
		if (hour == 12) {
			cout << "12";
			cout << ':';
			cout << setfill('0') << setw(2) << minute;
			cout << ':';
			cout << setfill('0') << setw(2) << second;
		}
		else {
			cout << setfill('0') << setw(2) << hour + 12;
			cout << ':';
			cout << setfill('0') << setw(2) << minute;
			cout << ':';
			cout << setfill('0') << setw(2) << second;
		}
	}
	cout << '\n';
	return 0;
}