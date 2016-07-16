#include "iostream"

using namespace std;

int main()
{
	int x, n;
	int leftsum = 0;
	int rightsum = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> x;
			if (i == j) {
				//left diagonal
				leftsum += x;
			}
			if (i + j == n - 1) {
				//right diagonal
				rightsum += x;
			}
		}
	}

	int diff = (leftsum > rightsum)?(leftsum - rightsum) : (rightsum - leftsum);
	cout << diff;

	return 0;
}