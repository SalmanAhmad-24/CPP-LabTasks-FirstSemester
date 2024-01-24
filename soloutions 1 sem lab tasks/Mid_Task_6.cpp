#include <iostream>
using namespace std;

int main()
{
	int num1, num2, base, carry = 0, mult = 1, mod1, mod2, sum = 0, sum_mod, check = 0;
	cout<<"Enter base system: ";
	cin>>base;
	cout<<"Enter number 1 with base: " << base << ": ";
	cin>>num1;
	cout<<"Enter number 2 with base: " << base << ": ";
	cin>>num2;
	int temp1 = num1, temp2 = num2, dec, dec_mod;
	while(num1>0 || num2>0)
	{	
		mod1 = num1%10;
		mod2 = num2%10;
		if (mod1 >= base || mod2 >= base)
		{
			check = 1;
			break;
		}
		dec = mod1 + mod2 + carry;
		dec_mod = dec%base;
		carry = dec/base;
		sum = sum + mult * dec_mod;
		mult = mult * 10;
		num1 = num1/10;
		num2 = num2/10;
	}
	if (check == 0)
	{
		sum = sum + mult * carry;
		cout<<"("<<temp1<<") + ("<<temp2<<") to the base "<<base<<" = "<<sum;
	}
	else
	{
		cout<<"You have entered invalid number/s for base "<<base;
	}
}
