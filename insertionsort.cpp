#include "iostream"

using namespace std;

void printarray(int array[], int n) {
	for(int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << '\n';
}

int main()
{
	int i, val, n;
	int inputarray[1000];

	cin >> n;

	for(i = 0; i < n; i++) {
		cin >> inputarray[i];
	}

	val = inputarray[n - 1];
	for(i = n - 1; i >= 0; i--) {
		if (i == 0) {
			inputarray[0] = val;
			break;
		}
		if (inputarray[i - 1] <= val) {
			inputarray[i] = val;
			break;
		}

		inputarray[i] = inputarray[i - 1];
		printarray(inputarray, n);
	}

	printarray(inputarray, n);
	return 0;
}