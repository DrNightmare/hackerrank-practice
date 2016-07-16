#include "iostream"

using namespace std;

int main()
{
	int i, t, n, k, x;
	int count;

	cin >> t;

	while(t--) {
		count = 0;
		cin >> n >> k;

		for (i = 0; i < n; i++) {
			cin >> x;
			if (x <= 0) {
				count++;
			}
		}

		if (count < k) {
			cout << "YES\n";
		}
		else {
			 cout << "NO\n";
		}

	}
	return 0;
}