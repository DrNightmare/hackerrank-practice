#include "iostream"
#include "iomanip"

using namespace std;

int main()
{
	int n, x;
	int pos = 0; int neg = 0; int zero = 0;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x;

		if (x == 0) {
			zero += 1;
		}
		else if (x > 0) {
			pos += 1;
		}
		else {
			neg += 1;
		}
	}

	double temp;
	temp = (double)pos/n;
	cout << std::setprecision(6) << temp << '\n';
	temp = (double)neg/n;
	cout << std::setprecision(6) << temp << '\n';
	temp = (double)zero/n;
	cout << std::setprecision(6) << temp << '\n';
	return 0;
}