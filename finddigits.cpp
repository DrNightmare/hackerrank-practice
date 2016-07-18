#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	long long int n, ncopy, rem;
	int t, count;
	cin >> t;
	while(t--){
		count = 0;
		cin >> n;
		ncopy = n;
		while(ncopy) {
			rem = ncopy % 10;
			if (rem != 0 && n % rem == 0) count++;
			ncopy /= 10;
		}
		cout << count << '\n';
	}

	return 0;
}