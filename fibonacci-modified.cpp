#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)
#define N 20

using namespace std;

long long int dp[N + 1];
long long int funct(int t1, int t2, int x) {
	dp[1] = t1;
	dp[2] = t2;
	for(int i = 3; i <= x; i++)
		dp[i] = dp[i - 2] + (dp[i - 1] * dp[i - 1]);

	return dp[x];
}

int main()
{
	int t1, t2, x;
	cin >> t1 >> t2 >> x;
	cout << funct(t1, t2, x) << '\n';
	return 0;
}