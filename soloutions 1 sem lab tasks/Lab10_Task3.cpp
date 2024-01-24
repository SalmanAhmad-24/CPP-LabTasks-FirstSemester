#include <iostream>
using namespace std;
int arr[5];

void sort(int arr[], int size)
{
    if (size == 1)
    {   return;}

    else
    {
        for (int ctr = 0; ctr < size-1; ctr++)
        {
            if (arr[ctr] > arr[ctr+1])
            {
                swap(arr[ctr], arr[ctr+1]);
            }
        }
        sort(arr, size-1);
    }   
}

int main()
{
    for (int ctr = 0; ctr<5; ctr++)
    {
        cout<<"Enter element number "<<ctr+1<<" : ";
        cin>>arr[ctr];
    }
    sort(arr, 5);
    cout<<"Sorted array : \n";
    for (int ctr = 0; ctr < 5; ctr++)
    {
        cout<<arr[ctr]<<"  ";
    }
}