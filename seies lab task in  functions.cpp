#include <iostream>
#include<ctime>
using namespace std;
int rolldice(int num) {
	int die1;
    int die2;
	int sum;
	int rolldie = 0;
	srand(time(0));
	do{
		die1 = rand() % 6 + 1;
		die2 = rand() % 6 + 1;
		sum = die1 + die2;
		rolldie++;

	} while (num != sum);
	return rolldie;


}


int main()
{
	int num;
	cin >> num;
	cout << " the number of times " << rolldice(num);

}