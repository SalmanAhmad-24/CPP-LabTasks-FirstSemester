/*
Write a C++ program to design a basic calculator which performs addition, multiplication, subtraction, division, and modulus.
Prompt user to enter first number, second number and operator (+, *, -, /, %), calculate and print it.
Ask if the user wants to perform the calculations again. If user enters yes, then your program will be executed again.
If no, then your program will be terminated.

Note: Warn the user if the input is not in the operators list. Also warn if user enters an invalid number for modulus operation.
*/
#include<iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op, choice;
    do
    {
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Enter operator (+, *, -, /, %): ";
        cin>>op;
        switch (op)
        {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            break;
        case '%':
            if (num1 == int(num1) && num2 == int(num2))
            {
                cout<<num1<<" % "<<num2<<" = "<<int(num1)%int(num2);
            }
            else
            {
                cout<<"You have Entered invalid numbers for the modulus operation.";
            }
            break;
        default:
            cout<<"You have enetered an invalid operator!";
            break;
        }
        cout<<endl<<"Do you want to use the calculator again? (Y/N): ";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y');
    cout<<"Thanks for using the Calculator!";
}