

#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << " enter the value of x ";
	cin >> x;
	cout  << " enter the value of n ";
	cin >> n;
	float sum = 0;
	for (int ctr = 1; ctr <= n; ctr += 2) {
		float power = 1;
		for (int pctr = 1; pctr <= ctr; pctr++) {
			power = power * x;

		}
		 float fact = 1;
		 for (int factctr = ctr; factctr >= 1;factctr--) {
			fact = fact * factctr;
		}
		sum = sum + (power / fact);
	}cout << sum;
	
















}

	




























