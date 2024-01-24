

#include <iostream>
using namespace  std;
int main()
{
	int a[12] = { 5,9,6,1,10,8,12,3,7,2,15,4 };
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
	}for (int j = 0; j < 12; j++) {
		cout << a[j];
	}

}
	



























