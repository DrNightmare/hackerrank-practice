#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)
#define N 251
#define M 51

using namespace std;

// for m, pass index of last element in coins array
long long int dp[N][M];
long long int numWays(int n, int coins[], int m) {
	if (n < 0 || m < 0) return 0;
	if (n == 0) return 1;

	if (dp[n][m] != -1) return dp[n][m];

	// number of ways by using mth coin + number of ways by not using mth coin 
	dp[n][m] = numWays(n - coins[m], coins, m) + numWays(n, coins, m - 1);
	return dp[n][m];
}

int main()
{
	int n, m;
	cin >> n >> m;
	int coins[m];
	for(int i = 0; i < m; i++) cin >> coins[i];

	for(int i = 0; i <= n; i++)
		for(int j = 0; j <= m; j++) dp[i][j] = -1;

	cout << numWays(n, coins, m - 1) << '\n';	
	return 0;
}