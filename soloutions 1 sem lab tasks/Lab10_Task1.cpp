#include<iostream>
using namespace std;

int reverse(int num, int mult)
{
    if (num == 0)
    {   return 0;}
    else
    {   return ((num%10)*mult + reverse(num/10, mult/10));}
}

int main()
{
    int num, temp, rev, mult = 1;
    do
    {
        cout<<"Enter a positive number: ";
        cin>>num;
    } while (num < 0);
    temp = num;
    // First, you have to find out the maximum value for multiplier
    while (temp > 10)
    {
        mult = mult * 10;
        temp = temp / 10;
    }
    rev = reverse(num, mult);
    if (num == rev)
    {   cout<<num<<" is a Palindrome number";}
    else
    {   cout<<num<<" is not a Palindrome number";}
}