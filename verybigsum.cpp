#include "iostream"

using namespace std;

int main()
{
	int n;
	long long int x;
	long long int sum = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}

	cout << sum;
	return 0;
}