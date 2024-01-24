#include<iostream>
using namespace std;

bool isSquare(int num);
void display(int num, bool flag);
void display(int count);
int count = 0;
int main()
{
    int lower, upper;
    bool flag;
    cout<<"Enter the lower limit of a range: ";
    cin>>lower;
    cout<<"Enter the upper limit of a range: ";
    cin>>upper;
    
    for (lower; lower <= upper; lower++)
    {
        flag = isSquare(lower);
        display(lower, flag);
    }
    display(count);
}

bool isSquare(int num)
{
    for (int ctr = 1; ctr * ctr <= num; ctr++)
    {
        if (ctr * ctr == num)
        {
            count += 1;
            return true;
        }
    }
    return false;
}

void display(int num, bool flag)
{
    if (flag == true && count == 1)
    {
        cout<<"The list of perfect squares between the range : "<<num<<"  ";
    }
    else if (flag == true && count > 1)
    {
        cout<<num<<"  ";
    }
}

void display(int count)
{
    if (count == 0)
    {
        cout<<"There are no perfect squares between the range.";
    }
}