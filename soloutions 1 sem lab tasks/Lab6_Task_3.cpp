/*
Write a C++ program to prompt a user to enter a range of two numbers.
Find out all the palindrome numbers between that range and print out to screen.

Hint: Palindrome is a number which is equal to its reverse.

Bonus Part: Warn and prompt user to enter correct limit,
if the user enters upper limit of the range smaller than the lower limit of the range.
*/
#include<iostream>
using namespace std;
int main()
{
    int lower, upper;
    char choice = 'n';
    do
    {
        cout<<"Enter lower value of the range: ";
        cin>>lower;
        cout<<"Enter outer value of the range: ";
        cin>>upper;
        if (upper < lower)
        {
            cout<<"Ops! Upper limit of the range is smaller than lower limit! Please try again!";
            choice = 'Y';
        }
        else
        {
            cout<<"The Plaindrome Numbers between "<<lower<<" and "<<upper<<" are : ";
            for (lower; lower <= upper; lower++)
            {
                int num = lower, rev = 0, mod;
                while (num != 0)
                {
                    mod = num % 10;
                    rev = rev * 10 + mod;
                    num = num / 10;
                }
                if (rev == lower)
                {
                    cout<<lower<<", ";
                }
            }
        }
    } while (choice == 'Y');
}