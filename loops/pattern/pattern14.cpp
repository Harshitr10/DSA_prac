#include <iostream>
using namespace std;
int main()
{
    int row,col1,col2;
    for(row=1;row<=4;row++)
    {
        for(col1=1;col1<=(4-row);col1++)
        {
            cout<<" ";


        }
        for(col2=1;col2<=row;col2++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}