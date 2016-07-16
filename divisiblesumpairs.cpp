#include "iostream"

using namespace std;

int main()
{
	int i, j, n, k;
	int inputarray[100];
	int count = 0;

	cin >> n >> k;

	for(i = 0; i < n; i++) {
		cin >> inputarray[i];
	}

	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if ((inputarray[i] + inputarray[j]) % k == 0) {
				count++;
			}
		}
	}

	cout << count << '\n';

	return 0;
}