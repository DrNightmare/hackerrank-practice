#include "iostream"
#include "vector"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int candiesCount(vector<int> ratings) {
	int n = ratings.size();

	vector<int> candies(n, 1);

	for(int i = 1; i < n; i++)
		if (ratings[i] > ratings[i - 1])
			candies[i] = candies[i - 1] + 1;

	for(int i = n - 1; i >= 0; i--)
		if (ratings[i] > ratings[i + 1])
			if (candies[i] <= candies[i + 1])
				candies[i] = candies[i + 1] + 1;

	long long int sum = 0;
	for(int i = 0; i < n; i++) sum += candies[i];

	return sum;
}

int main()
{
	int n, rating;
	cin >> n;
	vector<int> ratings;

	for(int i = 0; i < n; i++) {
		cin >> rating;
		ratings.push_back(rating);
	}

	cout << candiesCount(ratings) << '\n';

	return 0;
}