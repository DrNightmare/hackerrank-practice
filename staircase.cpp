#include "iostream"

using namespace std;

int main()
{
	int n, j;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			cout << ' ';
		}
		while(j <= n - 1) {
			cout << '#';
			j++;
		}
		cout << '\n';
	}
	return 0;
}