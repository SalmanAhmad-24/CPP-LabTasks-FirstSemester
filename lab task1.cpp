#include <iostream>
using namespace std;
bool checkprime(int value) {
    int check;
        check = 0;
        for (int j = 1; j <= value; j++) {
            if (value % j == 0) {
                check++;
            }
        }
        if (check == 2) {
            return true;
        }
        else
            return false;
}

void display(bool flag, int idx)
{
    if (flag == true)
    {
        cout << idx << " is upset\n";
    }
    else
    {
        cout << idx << " is happy\n";

    }
    
}

int main()
{
    int arr[5], value;
    bool flag;
    cout << "Enter the elements of an  array ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    

    for (int ctr = 0; ctr < 5; ctr++)
    {
        value = arr[ctr];
        flag = checkprime(value);
        display(flag, ctr+1);
    }

}
