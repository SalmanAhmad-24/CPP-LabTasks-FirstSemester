

#include <iostream>
using namespace std;
int count = 0;
bool check(int num) 
{
	for (int i = 1; i <= num;i++) {
		if (i*i==num) {
			return true;
		}
		
		
    }
	return false;
      

}
void display(int ranges, int rangef) {
	for (ranges; ranges <= rangef; ranges++) {
		for (int i = 1; i <= ranges; i++) {
			if (i * i == ranges) {
				::count++;
				cout<< ranges<< " ";
				
			}
			
			
	    }   
		
	}

}

int main()
{
	int num1, num2;
	cout << " enter the starting range ";
	cin >> num1;
	cout << " enter the ending  range ";
	cin >> num2;
	display(num1, num2);
	if (::count == 0) {
		cout << " there is no perfect square ";
	}
	






}