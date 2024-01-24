/*
Write a C++ program to prompt user to enter value of x and n. Calculate the sum of the following series:
sum = (x^1/1!)+(x^3/3!)+(x^5/5!) + ... + (x^n/n!)

Hint: An outer loop will calculate the sum; one inner loop will calculate the power, and another will calculate the factorial.
*/
#include<iostream>
using namespace std;
int main()
{
    int x, n;
    float sum = 0;
    cout<<"Enter x value: ";
    cin>>x;
    cout<<"Enter power value (n): ";
    cin>>n;
    for (int n_ctr = 1; n_ctr <= n; n_ctr+=2)
    {
        float power = 1, fact = 1;
        for (int pwr_ctr = 1; pwr_ctr <= n_ctr; pwr_ct  r++)
        {
            power = power * x;
        }

        for (int fact_ctr = 1; fact_ctr <= n_ctr; fact_ctr++)
        {
            fact = fact * fact_ctr;
        }
        
        sum = sum + (power/fact);
    }
    cout<<"Sum of the given series: "<<sum;
}
