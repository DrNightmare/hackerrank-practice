#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)
#define N 40
using namespace std;

int dp[N + 1];
int numWays(int n) {
	if (n < 0) return 0;
	if (n == 0) return 1;

	if (dp[n] != -1) return dp[n];

	return dp[n] = numWays(n - 1) + numWays(n - 4);
}

int numPrimes(int n) {
    bool prime[n+1];
	for(int i = 0; i <= n; i++) prime[i] = true;

	for(int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for(int i = p * 2; i <= n; i += p) prime[i] = false;
		}
	}

 	int count = 0;
	for(int p = 2; p <= n; p++) { 
		if (prime[p]) count++;
	}
	return count;
}

int main()
{
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i <= N; i++) dp[i] = -1;
		cout << numPrimes(numWays(n)) << '\n';
	}
	return 0;
}