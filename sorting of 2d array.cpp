

#include <iostream>
using namespace std;

int main()
{
	int arr2d[3][4] = { {1,4,3,6},{2,8,5,12},{13,9,7,15} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << " the sorted array " << endl;
	for (int k = 0; k < 11; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (arr2d[i][j] > arr2d[i][j + 1]) {
					int temp = arr2d[i][j + 1];
					arr2d[i][j + 1] = arr2d[i][j];
					arr2d[i][j] = temp;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}


}
