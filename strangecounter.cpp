#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	long int t;
	cin >> t;
	long int lastvalue = 1;
	long int lasttime = 3;
	long int firstvalue = 3;
	
	while(true) {
		if (t <= lasttime) break;
		firstvalue *= 2;
		lastvalue += firstvalue;
		lasttime += firstvalue;
	}
	cout << firstvalue - (t - (lasttime - firstvalue + 1)) << '\n';
	return 0;
}