#include<iostream>
using namespace std;

float average(float arr[], int size)
{
    float sum = 0, avg;
    for (int ctr = 0; ctr < size; ctr++)
    {
        sum = sum + arr[ctr];
    }
    avg = sum/size;
    return avg;
}

int main()
{
    int size;
    char ch;
    do
    {
        cout<<"Enter size of the array: ";
        cin>>size;
        float arr[size], avg;
        for (int ctr = 0; ctr < size; ctr++)
        {
            cout<<"Enter element No. "<<ctr+1<<": ";
            cin>>arr[ctr];
        }
        avg = average(arr, size);
        cout<<"The average of the given array of size "<<size<<" is : "<<avg;
        cout<<"\nDo you want to calculate average of another array? (Y/N): ";
        cin>>ch;
    } while (ch == 'Y');
    cout<<"Thanks for using average calculator!";
}