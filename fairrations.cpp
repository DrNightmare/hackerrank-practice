#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	bool done = false;
	int count = 0;
	REP(i, n) cin >> arr[i];
	REP(i, n) {
		if (arr[i] % 2 == 1) {
			if (i == n - 1) break;
			arr[i]++; 
			arr[i + 1]++;
			i--;
			count += 2;
		}
	}
	REP(i, n) if (arr[i] % 2) { cout << "NO\n"; done = true; break; }
	if (!done) cout << count << '\n';
	return 0;
}