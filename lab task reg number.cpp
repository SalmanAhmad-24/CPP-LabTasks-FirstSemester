
#include <iostream>
using namespace std;

int main()
{
	string name;
	int age;
	int gender;
	int batch;
	int sem;
	int reg;


	cout << "enter your name ";
	cin >> name;
	cout << endl;


	cout << "enter your age";
	cin >> age;
	cout << endl;


	cout << "enter your gender";
	cin >> gender;
	cout << endl;


	cout << " enter your batch ";
	cin >> batch;
	cout << endl;


	cout << "enter your semester number ";
	cin >> sem;
	cout << endl;

	if ((batch == 31) && ((sem == 1) || (sem == 2))) {
		reg = (2021 * 10) + sem;
		reg = (reg * 10) + age % 10;
		reg = (reg * 10) + gender;
		cout << "reg number is " << reg << endl;

	}
	else if ((batch == 30) && ((sem == 3) || (sem == 4))) {
		reg = (2020 * 10) + sem;
		reg = (reg * 10) + age % 10;
		reg = (reg * 10) + gender;
		cout << "reg number is " << reg << endl;

	}
	else if ((batch == 29) && ((sem == 5) || (sem == 6))) {
		reg = (2019 * 10) + sem;
		reg = (reg * 10) + age % 10;
		reg = (reg * 10) + gender;
		cout << "reg number is " << reg << endl;
	}
	else if ((batch == 28) && ((sem == 7) || (sem == 8))) {
		reg = (2018 * 10) + sem;
		reg = (reg * 10) + age % 10;
		reg = (reg * 10) + gender;
		cout << "reg number is " << reg << endl;
	}
	else
		cout << " invalid entry " << endl;
	return 0;


		










































































































































}
