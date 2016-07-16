#include "iostream"

using namespace std;

int main()
{

	int t;
	long long int n, m, s;

	cin >> t;

	while(t--) {
		cin >> n >> m >> s;

		long long int result = (m % n) + s - 1;
		if (result == 0) {
			cout << n << '\n';
		}
		else if (result > n) {
			cout << (result % n) << '\n';
		}
		else {
			cout << result << '\n';
		}
	}
	return 0;
}