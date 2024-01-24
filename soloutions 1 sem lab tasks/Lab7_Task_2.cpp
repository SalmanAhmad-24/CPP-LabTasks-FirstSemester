#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter marks of five students: ";
	for (int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	int first = 0, second = 0, third = 0;
	for (int i=0; i<5; i++)
	{
		if (arr[i] >= first)
		{
			third = second;
			second = first;
			first = arr[i];
		}
		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}
		else if (arr[i] > third)
		{
			third = arr[i];
		}
	}
	cout<<first<<second<<third;
}
