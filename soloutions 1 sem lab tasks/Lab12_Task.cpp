#include <iostream>
using namespace std;

void findCount(int*, int*, int*);

int main()
{
	int* add;
	int num, even = 0, odd = 0;
	cout<<"Enter a multiple digited number: ";
	cin>>num;
	add = &num;
	findCount(add, &odd, &even);
	cout<<"Number of even digits: "<<even<<endl;
	cout<<"Number of odd digits: "<<odd;
}

void findCount(int* num, int* odd, int* even)
{
	int temp = *num;
	int rem;
	while (temp > 0)
	{
		rem = temp%10;
		if (rem%2 == 0)
		{
			*even = *even + 1;
		}
		else
		{
			*odd = *odd + 1;
		}
		temp = temp/10;
	}
}
