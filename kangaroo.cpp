#include "iostream"

using namespace std;

int main()
{
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	if (v1 == v2) {
		if (x1 == x2) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else
	{
		if ((x2 - x1) % (v1 - v2) == 0) {
			if ((x2 - x1) / (v1 - v2) < 0) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
		else {
			cout << "NO\n";
		}
	} 

	return 0;
}