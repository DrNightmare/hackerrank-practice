#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int max(int x, int y) {
	return (x > y) ? x : y;
}

int maxSumContinuous(int arr[], int n) {
	int dp[n];
	dp[0] = arr[0];
	int ans = arr[0];
	for(int i = 1; i < n; i++) {
		dp[i] = max(arr[i], arr[i] + dp[i-1]);
		ans = max(ans, dp[i]);
	}
	return ans;
}

int maxSum(int arr[], int n) {
	int dp[n]; 
	dp[0] = arr[0];
	int ans = arr[0];
	for(int i = 1; i < n; i++) {
		dp[i] = arr[i];
		for(int j = i - 1; j >= 0; j--) {
			dp[i] = max(dp[i], arr[i] + dp[j]);
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}

int main()
{
	// int arr[] = {1, 2, 3, 4, 2, 5};
	// int n = sizeof(arr)/sizeof(arr[0]);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		REP(i, n) cin >> arr[i];
		cout << maxSumContinuous(arr, n) << ' ' <<  maxSum(arr, n) << '\n';
	}

	return 0;
}