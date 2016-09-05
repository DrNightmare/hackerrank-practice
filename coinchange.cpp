#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)
#define N 20
#define M 20

using namespace std;

int dp[N][M];
int numWaysChange(int n, int coins[], int m) {
	if (n < 0 || m < 0) return 0;
	if (n == 0) return 1;
	if (dp[n][m] != -1) return dp[n][m];
	dp[n][m] = numWaysChange(n, coins, m - 1) + numWaysChange(n - coins[m], coins, m);
	return dp[n][m];
}

int main()
{
	int n = 4;
	int coins[] = {1, 2, 3, 4};
	int m = sizeof(coins)/sizeof(coins[0]);

	for(int i = 0; i <= n; i++)
		for(int j = 0; j <= m; j++) 
			dp[i][j] = -1;

	cout << numWaysChange(n, coins, m - 1) << '\n';
	return 0;
}
