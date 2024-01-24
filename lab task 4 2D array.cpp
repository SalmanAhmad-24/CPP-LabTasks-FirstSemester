
#include <iostream>
using namespace std;

int main()
{ // declaring and initializing the string array
	string arr[4] = { "s.no "," reg.no ","   age ","   marks " };
	// declaring and initializing the table.
	float arr2d[5][4] = { {1,2168,18.5,78.5},{2,1224,17.5,83},{3,3457,19,92},{4,1054,19.5,87},{5,2978,20,77} };
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "  ";

	}cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr2d[i][j] << "       ";
		}cout << endl;
	}
	int choice;
	cout << " enter the number according to which you have to sort the coloumn  ";
	cin >> choice;
	//now to sort according to the choice
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "  ";

	}
	cout << endl;
	
		for (int i = 0; i < 5; i++) {
			for (int j = 1; j < 5 ;j++ ) {
				
					if (arr2d[j - 1][choice - 1] < arr2d[j][choice - 1]) {
						for (int k = 0; k <= 3; k++) {
							float temp = arr2d[j - 1][k];
							arr2d[j - 1][k] = arr2d[j][k];
							arr2d[j][k] = temp;
						}
					}
				
			}
			
		}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr2d[i][j] << "       ";
		}cout << endl;
	}
			
			
		
		
	
	
}
			
	

   





























