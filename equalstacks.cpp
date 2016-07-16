#include "iostream"

using namespace std;

int max(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	if (b > c) {
		return b;
	}
	else {
		return c;
	}
}

int main()
{
	int i, n1, n2, n3;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;

	int stack1[10000], stack2[10000], stack3[10000];

	cin >> n1 >> n2 >> n3;
	for(i = 0; i < n1; i++) {
		cin >> stack1[i];
		sum1 += stack1[i];
	}

	for(i = 0; i < n2; i++) {
		cin >> stack2[i];
		sum2 += stack2[i];
	}

	for(i = 0; i < n3; i++) {
		cin >> stack3[i];
		sum3 += stack3[i];
	}

	while(true) {
		if (sum1 == 0 || sum2 == 0 || sum3 == 0) {
			break;
		}

		if (sum1 == sum2 && sum2 == sum3) {
			break;
		}

		if (sum1 == max(sum1, sum2, sum3)) {
			sum1 -= stack1[count1];
			count1++;
		}
		else if (sum2 == max(sum1, sum2, sum3)) {
			sum2 -= stack2[count2];
			count2++;
		}
		else if (sum3 == max(sum1, sum2, sum3)) {
			sum3 -= stack3[count3];
			count3++;
		}
	}

	cout << sum1;
	return 0;
}