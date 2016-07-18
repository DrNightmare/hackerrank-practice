#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, j;
	int arr[1000];
	int min = 10001;

	cin >> n;
	REP(i, n) cin >> arr[i];

	REP(i, n) {
		int el = arr[j];
		for (int j = i + 1; j < n; ++j)
			if (arr[j] == arr[i] && (j - i) < min) {min = j-i; break;}
	}

	if (min == 10001) cout << -1 << '\n';
	else cout << min << '\n';
	return 0;
}