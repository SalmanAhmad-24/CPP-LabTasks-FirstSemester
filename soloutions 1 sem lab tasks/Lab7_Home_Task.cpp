#include<iostream>
using namespace std;
int main()
{
    float tab[5][4] = {{1, 2168, 18.5, 78.5}, {2, 1224, 17.5, 83}, {3, 3457, 19, 92}, {4, 1054, 19.5, 87}, {5, 2978, 20, 77}};
    int choice, idx_ordr[5], max_idx;
    float sort_tab[5][4], temp[5];
    cout<<"Enter column No. at which you want to sort table: (1 for S. No, 2 for Reg. No, 3 for Age, and 4 for Marks): ";
    cin>>choice;
    choice = choice - 1;
    cout<<"Table before sorting: "<<endl;
    cout<<"S.No\tReg. No\tAge\tMarks\n";
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<tab[row][col]<<"\t";
        }
        cout<<endl;
    }
    
    // Loop for fetching the column from data table at which you want to sort the table
    for (int idx = 0; idx < 5; idx++)
    {
        temp[idx] = tab[idx][choice];
    }

    // Loops for finding out order of indices (in decending order)
    for (int ctr = 0; ctr < 5; ctr++)
    {
        float max = 0;
        for (int idx = 0; idx < 5; idx++)
        {
            if (max <= temp[idx])
            {
                max = temp[idx];
                max_idx = idx;
            }
        }
        idx_ordr[ctr] = max_idx;
        temp[max_idx] = 0;
    }

    // Loop for storing data table in sorted table based on the order of indices
    int tab_row;
    for (int row = 0; row < 5; row++)
    {
        tab_row = idx_ordr[row];
        for (int col = 0; col < 4; col++)
        {
            sort_tab[row][col] = tab[tab_row][col];
        }
    }

    cout<<"\nTable after sorting based on column "<<choice + 1<<endl;
    cout<<"S.No\tReg. No\tAge\tMarks\n";
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<sort_tab[row][col]<<"\t";
        }
        cout<<endl;
    }
}
